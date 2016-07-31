/* 
 *  Turtle, creates little mouse movements every 10 sec.
 *  Slow movement, therefore the name Turtle
 *  Derived from: 
 *  
 *  Simple USB Mouse Example
 *  Teensy becomes a USB mouse and moves the cursor in a triangle
 *
 *  You must select Mouse from the "Tools > USB Type" menu
 *
 *  This example code is in the public domain.
*/

int init_done = 0;

void setup() 
{ 
   init_done = 0;
} 

void loop() 
{
   if( init_done )
   {
      Turtle();
   }
   else
   {
      ShowInit();
      init_done = 1;
   }
  
}


void ShowInit( void )
{
   int i;
   delay( 8000 ); 
   for ( i = 0; i < 200; ++i )
   {
      Mouse.move(-1, 0);
      delay( 5 );
   }
   for ( i = 0; i < 200; ++i )
   {
      Mouse.move( 1, 0 );
      delay( 5 );
   }
}


void Turtle( void )
{
   Mouse.move(0, -1);
   delay(2);
   Mouse.move(0, 1);
   delay (10000);
}

