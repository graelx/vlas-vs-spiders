@echo off

rem set UTILS=..\..\..\src\utils
set UTILS=..\utils

echo Compilando musica 128k - Wyz Player

rem ..\..\..\src\utils\apultra.exe 01_TITLE!.mus 01_TITLE!.mus.bin
rem ..\..\..\src\utils\apultra.exe 02_INTRO!!!.mus 02_INTRO!!!.mus.bin
rem ..\..\..\src\utils\apultra.exe 03_ZONE123!.mus 03_ZONE123!.mus.bin
rem ..\..\..\src\utils\apultra.exe 04_FASE1.mus 04_FASE1.mus.bin
rem ..\..\..\src\utils\apultra.exe 05_FASE2.mus 05_FASE2.mus.bin
rem ..\..\..\src\utils\apultra.exe 06_FASE3.mus 06_FASE3.mus.bin
rem ..\..\..\src\utils\apultra.exe 07_ZONE5!.mus 07_ZONE5!.mus.bin
rem ..\..\..\src\utils\apultra.exe 08_FASE5.mus 08_FASE5.mus.bin
rem ..\..\..\src\utils\apultra.exe 10_GAME_OVER!.mus 10_GAME_OVER!.mus.bin
rem ..\..\..\src\utils\apultra.exe 09_ENDING!.mus 09_ENDING!.mus.bin

%UTILS%\apultra.exe menu.mus menu.mus.bin
%UTILS%\apultra.exe level.mus level.mus.bin
%UTILS%\apultra.exe gameending.mus gameending.mus.bin
%UTILS%\apultra.exe gameover.mus gameover.mus.bin

pause
