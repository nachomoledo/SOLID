# SOLID
SOLID Principles Examples in C++

## SRP

Se separa el detalle para dibujar las formas de la clase Shape.

## OCP

La clase Shape no tiene un enum id para cada forma.
La función para graficar todas las formas no tiene un switch-case para llamar a la función correcta según la forma a dibujar y no necesita cambiar si se agrega un nuevo tipo de forma.

## LSP
Las clases Square y Rectangle se separan ya que si una hereda de la otra no podrían ocurrir problemas con los atributos ancho y alto. Si cuadrado deriva de rectángulo, tendría más atributos de los necesarios y unas funciones setWidth() y setHeight() deberían setear ambos atributos para un cuadrado, lo cuál no es lo que espera un rectángulo y una función getArea() podría dar un resultado incorrecto en un rectángulo. Algo similar ocurriría si rectángulo derivara de cuadrado.

## ISP y DIP

Se usa el patrón Strategy para cumplir con estos principios. La formas definen cómo quieren ser dibujadas con una interfaz y al construirlas reciben una implementación concreta para dibujarse. 


## Basado en
Breaking Dependencies: The SOLID Principles - Klaus Iglberger - CppCon 2020
https://www.youtube.com/watch?v=Ntraj80qN2k

## Trabajos futuros
Incluir clase Screen y Overlap para poder graficar figuras horizontalmente aplicando principalmente el principio SRP.
