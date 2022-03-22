# tp01-2022-sofirebechi

## GitIgnore

El archivo _.gitignore_, sirve para decirle a Git qué archivos o directorios completos debe ignorar y no subir al repositorio de código, 
teniendo en cuenta que no todos los archivos y carpetas son necesarios de gestionar a partir del sistema de control de versiones. 
Es conveniente incluirlo ya que si [Git](https://github.com/) ignora todos esos archivos, el peso total de proyecto será mucho menor y eso redundará en un mejor
mantenimiento y distribución del código. 
Lo ideal es incluir este archivo al iniciar el proyecto, ya que de no ser así pueden subirse algunos archivos indeseados a nuestro repositorio
remoto, los cuales permanecerán aunque luego agreguemos nuestro "_.gitignore_" y deberemos hacer pasos adicionales para eliminar los mismos.
Para configurar el archivo _.gitignore_ debemos crear un archivo de texto plano y dentro de el debemos colocar el nombre de cada archivo ocarpeta que queremos que 
[Git](https://github.com/), ignore. Por ejemplo, si indicamos la línea

**bower_components/**

Estamos evitando que se procese en el control de versiones todo el contenido de la carpeta **bower_components**.

Si colocamos la siguiente línea:

***.DS_Store**

Estaremos evitando que el sistema de control de versiones procese todos los archivos acabados de **.DS_Store**
Con el **#** adjuntamos comentarios en el archivo.
Para ignorar el archivo **ignorado.txt**, escribiríamos:

#ignorar el archivo "ignorado.txt"

ignorado.txt