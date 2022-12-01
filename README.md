# pymes-inventory
Sistema de inventario de pymes

## Descripción general 

Este pequeño proyecto es un inventario de pymes (pequeñas y medianas empresas), es decir, se puede añadir al inventario la información de distintas
empresas llenando cierta información. Asimismo, también se puede añadir la información de los trabajadores de estas empresas. Por último, el usuario puede buscar por distintos
criterios si existe algún empleado o empresa que cumpla con estos, ya sea por nombre, RFC, etc. 

## Explicacion breve del código 

El programa usa el paradigma de programación orientada a objetos (POO) para crear dos clases. La primera de estas se denominó "Pymes", esta clase tiene sus atributos y métodos. 
Por otro lado, también se creó una clase hija de esta primera, denominada "Workers", análogamente a la previa clase, esta también tiene sus atributos (heredados y no heredados) 
y sus métodos.

La relación de herencia a grandes rasgos funciona de la siguiente forma:
![image](https://user-images.githubusercontent.com/119465964/204956770-9e9ea5cb-4699-4295-8342-77248d64b6ba.png)

Por último, ambas clases tienen sus setters y getters correspondientes, así como un método que permite mostrar en pantalla toda la información del objeto en cuestión. 

El programa tiene 4 funciones void y la función main que junta todo. Existen dos tipos de funciones: 

### Pedir información

En este tipo de función, se le pide al usuario la información de un pyme o de un trabajador, es decir, se pide que se ingrese toda la información. Cada uno de los atributos son primero
guardados en ciertas variables para posteriormente ser pasadas como argumentos a cada uno de los setters de todos los atributos. Existe una función de este tipo para los trabajadores y 
otra para los pymes.

### Buscar por criterios

En este tipo de función, se le pide al usuario un criterio de búsqueda, es deicr, por nombre, rfc, edad, etc. dependiendo si se busca una empresa o un trabajador. El usuario ingresa su 
respuesta y esta es analizada por medio de un switch-case que dirige el usuario al caso deseado. Se pide entonces el dato que quiere revisar, en seguida se usa un for loop para analizar
el array de todos los objetos creados, al estar iterando, se llama al método gettier correspondiente para corroborar si el atributo del objeto en cuestión es el mismo que el buscado. 
Si es así, entonces se muestra en pantalla toda la información de tal objeto por medio del método de clase. Si no hay información coincidente con la búsqueda, entonces se muestra un mensaje
en la pantalla que indica esto. Justo como el otro tipo de función, existe una de estas para cada tipo de objeto. 

### Main 

La función main comienza mostrando una bienvenida y en seguida muestra todo el menú de opciones, cuando el usuario dé su respuesta, se analizará por medio de un switch-case que dirigirá 
al usuario a la opción deseada. Entonces, en cada una de las opciones, se llamará a una de las 4 funciones previamente descritas. Por otro lado, si se indica que quiere salir, entonces 
el programa mostrará una despedida y terminará la ejecución. 

### Información extra 

Para poder crear distintos objetos y modificarlos, se usó un array de 1000 objetos por clase. Estos están declarados fuera de las funciones para que se puedan usar globalmente por todas las
funciones en cuestión. A la hora de querer añadir la información a un objeto, simplemente se usa un iterador que indica el número de objeto creado para usar como indice en el array y así modificar
un objeto en específico del array. 
