@echo off
rem set Z88DK_PATH=c:\z88dk
rem set Z88DK_PATH=z:\home\gra\__varios_progs\z88dk
set Z88DK_PATH=z:\__varios_progs\z88dk
set PATH=%Z88DK_PATH%\bin.x86;%PATH%
set Z80_OZFILES=%Z88DK_PATH%\Lib\
set ZCCCFG=%Z88DK_PATH%\Lib\Config\

@echo off

if [%1]==[help] goto :help

set game=mrpt

if [%1]==[justcompile] goto :compile
if [%1]==[clean] goto :clean

cd ..\script
if not exist %game%.spt goto :noscript
echo Compilando script
..\utils\msc3_mk1.exe %game%.spt 30 > nul
copy msc.h ..\dev\my > nul
copy msc-config.h ..\dev\my > nul
copy scripts.bin ..\dev\ > nul
:noscript
cd ..\dev

if [%1]==[justscripts] goto :compile

echo Convirtiendo mapa packed
..\utils\mapcnv.exe ..\map\mapa.map assets\mapa.h 5 6 15 10 15 > nul
rem ..\utils\mapcnv.exe ..\map\mapa.map assets\mapa.h 10 3 15 10 15 packed > nul

echo Convirtiendo enemigos/hotspots
..\utils\ene2h.exe ..\enems\enems.ene assets\enems.h

echo Importando GFX
..\utils\ts2bin.exe ..\gfx\font.png ..\gfx\work.png tileset.bin 7 >nul

rem ..\utils\sprcnv.exe ..\gfx\sprites.png assets\sprites.h > nul
..\utils\sprcnv2.exe ..\gfx\sprites.png assets\sprites.h 22 extra > nul

..\utils\sprcnvbin.exe ..\gfx\sprites_extra.png sprites_extra.bin 1 > nul
..\utils\sprcnvbin8.exe ..\gfx\sprites_bullet.png sprites_bullet.bin 1 > nul

rem ..\utils\png2scr.exe ..\gfx\title.png ..\gfx\title.scr > nul
rem ..\utils\png2scr.exe ..\gfx\marco.png ..\gfx\marco.scr > nul
rem ..\utils\png2scr.exe ..\gfx\ending.png ..\gfx\ending.scr > nul
..\utils\png2scr.exe ..\gfx\loading.png loading.bin > nul
rem ..\utils\apultra.exe ..\gfx\title.scr ..\bin\title.bin > nul
rem ..\utils\apultra.exe ..\gfx\marco.scr ..\bin\marco.bin > nul
rem ..\utils\apultra.exe ..\gfx\ending.scr ..\bin\ending.bin > nul
rem Pantalla de GameOver
rem ..\utils\png2scr.exe ..\gfx\gameover.png ..\gfx\gameover.scr > nul
rem ..\utils\apultra.exe ..\gfx\gameover.scr ..\bin\gameover.bin > nul

if [%1]==[justassets] goto :end

rem echo Running The Librarian
rem ..\utils\librarian2.exe list=..\bin\list.txt index=assets\librarian.h bins_prefix=..\bin\ rams_prefix=..\bin\ > nul

rem *** Música AY: Descomenta el player que vayas a usar (Wyz o Arkos) ***

rem echo Compilando musica 128k - Wyz Player
rem cd ..\mus
rem ..\utils\apultra.exe menu.mus menu.bin
rem ..\utils\apultra.exe level1.mus level1.bin
rem ..\utils\pasmo WYZproPlay47aZXc.ASM ..\bin\RAM1.bin 
rem cd ..\dev

rem echo Compilando musica 128k - Arkos Player
rem cd ..\mus_arkos
rem if [%1]==[nomus] goto :nomus
rem ..\utils\build_mus_bin.exe ram1.bin > nul
rem :nomus
rem copy ram1.bin ..\bin
rem copy arkos-addresses.h ..\dev\sound
rem cd ..\dev

:compile
echo Compilando guego
zcc +zx -vn mk1.c -O3 -crt0=crt.asm -o %game%.bin -lsplib2_mk2.lib -zorg=24000 > nul
rem zcc +zx -vn mk1.c -o %game%.bin -lsplib2_mk2.lib -zorg=24000 > nul
..\utils\printsize.exe %game%.bin
..\utils\printsize.exe scripts.bin

rem *** Tipo de cargador ***

rem echo Construyendo cinta
rem cambia LOADER por el nombre que quieres que salga en Program:
rem ..\utils\bas2tap -a10 -sLOADER loader\loader.bas loader.tap > nul
rem ..\utils\bin2tap -o screen.tap -a 16384 loading.bin > nul
rem ..\utils\bin2tap -o main.tap -a 24000 %game%.bin > nul
rem copy /b loader.tap + screen.tap + main.tap %game%.tap > nul


echo Construyendo cinta 128k
..\utils\imanol.exe ^
	in=loader\loaderzx.asm-orig ^
	out=loader\loader.asm ^
	ram1_length=?..\bin\RAM1.bin ^
	ram3_length=?..\bin\RAM3.bin ^
	mb_length=?%game%.bin  > nul

..\utils\pasmo.exe loader\loader.asm ..\bin\loader.bin loader.txt

rem cambia LOADER por el nombre que quieres que salga en Program:
..\utils\GenTape.exe %game%.tap ^
	basic 'LOADER' 10 ..\bin\loader.bin ^
	data                loading.bin ^
	data                ..\bin\RAM1.bin ^
	data                ..\bin\RAM3.bin ^
	data                %game%.bin

goto :end 

if [%1]==[justcompile] goto :end
if [%1]==[noclean] goto :end

:clean
echo Limpiando
del loader.tap > nul
del screen.tap > nul
del main.tap > nul
del ..\gfx\*.scr > nul
del *.bin > nul

goto :end 

:help
echo "compile.bat help|justcompile|clean|justscripts|justassets|noclean"

:end
echo Hecho!
pause
