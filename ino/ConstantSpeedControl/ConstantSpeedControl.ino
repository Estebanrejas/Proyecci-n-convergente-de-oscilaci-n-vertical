// ConstantSpeed.pde
// -*- mode: C++ -*-
//
// Tutorial para controlar stepper desde 
// https://www.makerguides.com/tb6560-stepper-motor-driver-arduino-tutorial/
// Basado en el código de ejemplo de la librería AccelStepper
/// \autor original:  Mike McCauley (mikem@airspayce.com)
// Copyright (C) 2009 Mike McCauley
// $Id: ConstantSpeed.pde,v 1.1 2011/01/05 01:51:01 mikem Exp mikem $

#include <AccelStepper.h>
#define analogic 13
float valor;
// Definicion del motor stepper en el modo que se utiliza
// en este caso de 2 pines conectados al motor, los pines 2 y 4
// más información en https://www.airspayce.com/mikem/arduino/AccelStepper/classAccelStepper.html#ae79c49ad69d5ccc9da0ee691fa4ca235
AccelStepper stepper(AccelStepper::FULL2WIRE, 2, 4);// Defaults to AccelStepper::FULL4WIRE (4 pins) on 2, 3, 4, 5

void setup()
{  
   stepper.setMaxSpeed(10000); // Velocidad programada para el motor
	
}

void loop()
{  
   int analog_in = analogRead(analogic); // Lectura del potenciómetro
   valor = map(analog_in, 0, 4095, 10000, 0); // Mapeo del slider a las velocidades del motor
   stepper.setSpeed(valor); // Definir la velocidad segun el valor mapeado
   stepper.runSpeed(); // Ejecutar la velocidad leída.

}
