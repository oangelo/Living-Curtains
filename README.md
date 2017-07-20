# Living Curtains

This project aims to build a automation system for curtains. It might
seems silly at first, but, can be very interesting to have automated curtains:
It can help you wake up more naturally in the morning, letting slowly the sun
light come in the bed room; It can also help to maintain the room
temperature and save energy, on summer it can automatically close the curtains
during the day, to avoid making the ambient too hot, and open it at night,
letting the room cool, and the process can be inverted in the winter. 
And there are many other applications, like [insert your idea here].

# Foreword

The most challenging part of any automation project, probably, is the mechanics. 
While electronics are advancing, and right now is quite simple and cheap to
prototype simple projects like this one, mechanics demands space and
heavy tools that are expensive, and also many skills that are no easy to obtain in
the internet. So, one should balance cost, accessibility and easiness to mount
of the mechanical project. To make things easy, this project uses parts typically
found in 3D printers, they are not much cheap, but they can be bought in the
internet and are of easy assembly.
In this way, is possible to get a discrete system, since wives do not
allow the installation of odd things in the house.

The 28BYJ-48 step motors are very slow, but they are very cheap and silent, 
and also have enough force to move heavy curtains (with 12v). A large continuous servo
motor can be used if you need more speed, but they can be noisily.

# Bill of material (BOM)

* Arduino (Nano or Promini)
* Bluetooth or Wifi Module (HC-05/ESP8266)
* Level conveter
* Step Motor (28BYJ-48)
* RTC (I recomend the ![DS3231](https://github.com/Makuna/Rtc/wiki) module) 
* Optical stop switch (Endstop) 
* PU GT2 timing belt (white)
* 20T 5mm Bore 6mm Width GT2 Timing Belt Aluminum Drive Pulley for DIY 3D Printer 
* 20T 5mm Bore 6mm GT2 Timing belt Idler Pulley with Bearing For 3D Printer 
* L Shaped Fixing Bracket 
* Screws, Nuts and Washers
* Power Supply of 12v (Do not use the Arduino as a power supply for the motors!)

# Mounting

I am still working on the overall mechanics, but this is how it looks now.
![Motor and bracket](https://github.com/oangelo/Living-Curtains/blob/master/images/side2.jpg)
![Pulley with Bearing and bracket](https://github.com/oangelo/Living-Curtains/blob/master/images/side1.jpg)

Movie of the proof of concept 

[![Proof of concept](https://img.youtube.com/vi/6lGQgefd9yU/0.jpg)](https://www.youtube.com/watch?v=6lGQgefd9yU)
