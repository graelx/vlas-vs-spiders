
set nomMapa=mapa
@rem map2mk1 archivoEntrada.map archivoSalida.map anchoMapa altoMapa [opciones]
@rem Opciones: [archivo.txt] [-scrW:nn] [-scrH:nn] [-fixmappy]

map2mk1 mapa_mrpt.MAP %nomMapa%.MAP 5 6
rem map2mk1 mapa_mrpt.MAP %nomMapa%.MAP 10 3

copy %nomMapa%.MAP ..\enems
pause