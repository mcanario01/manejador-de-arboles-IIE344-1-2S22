# Manejador de arboles.
Este programa es un manejador de arboles. Lee un arbol con la representación de <<hijo más a la izquierda - hermano a la derecha>> de un archivo txt y logra manejar ciertos aspectos del mismo, usa de programación con estructuras de C++.

## Compilación.
Para compilar este programa, primero descarga o clona el repositorio con:
```bash
git clone https://github.com/mcanario01/manejador-de-arboles-IIE344-1-2S22
```
Luego, ingresa a la carpeta /manejador-de-arboles-IIE344-1-2S22/src:
```bash
cd /manejador-de-arboles-IIE344-1-2S22/src
```
Y compila:
```bash
make
```
Puedes compilar y ejecutar con el .txt por defecto con:
```bash
make run
```
Por último, puedes limpiar archivos residuales con:
```bash
make clear
```
## Uso
El funcionamiento del programa es bastante sencillo, para ejecutarlo usa:
```bash
./manejador-de-vendedores <ruta de archivo .txt>
```
Siendo la `<ruta del archivo .txt>` una ruta cualquiera a un archivo de dicha extensión (No inluye los corchetes).
### Funcionamiento.
Al iniciar, el programa reconocerá automagicamente el arbol asociado a el archivo .txt que ingresaste como parámetro.