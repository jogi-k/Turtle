# Turtle
A very very slow Mouse-Emulation ( a Turtle) to prevent Displays from switching off (e.g. presentations).  

This picture shows the final version in housing:  
![Turtle in housing](Turtle_Final_sm-300x225.jpg)

## Intention
This is intended to be used when doing a presentation and your Laptop is connected to the presenter (german: the "beamer") 
e.g. during a team-meeting.
Often it happens that discussions start and there is no more movement of the mouse and no keys at the Laptop-Keyboard are pressed.
After 5 min or so the Laptop switches off the presenter.   
The same applies to the situation when you are hosting e.g. a hangout-session with a presenter but mostly someone else presents, so there is no movement/keypress at your Laptop.

This small device prevents your Laptop from switching of the presenter.

Some guys (hey Lars :-) say you can reach the same behaviour with some "weird" settings somewhere deep in the configuration of your Operating System.
- that might be, but I dont find the settings...
- the seeting is depending on your OS, this little device is OS-independant
- doing a software-setting is pretty uncool and somehow missing the nerd factor ... 
  


## Realisation
### Hardware
Once more using a "flying around" Teensy-LC.
Once more a "shoot with cannons at sparrows"-project.
No additional Hardware needed

### Software
When connected to USB ( Teensy is started) after a delay of 8 seconds a movement of the mouse left and 
then back right to the original position is done.
This is just to show that Teensy now can act as a Mouse.
After that it only makes invisible 1-pixel-movements every 10 seconds.  
(Invisible means : 1 pixel left and after 2 ms back one pixel right)
That's it.  
For the teensy to work properly with the turtle-software, the Arduino-IDE has to be set to:
- Teensy
- USB-Type : Keyboard + Mouse + Joystick

See ![Arduino Settings](Arduino_Settings.png)



### Housing 
To show that this small tool is a turtle it is housed in a "turtle".
I used this one here from Wikimedia:
![Iimage of Turtle] (https://upload.wikimedia.org/wikipedia/commons/7/70/Kturtle_top_view.svg)

See the "making-of" and the final solution on my Blog (in German):
http://jogiblog.kuenstner.de/?p=66

