#include <Servo.h>  //Include the Servo Library
//#include <SoftwareSerial.h>
#define PI 3.1415926535897932384626433832795
// --------------------------------------------
Servo PATAS[6][3];
//SoftwareSerial miBT(12, 13);
//========================================================
const float delta_t = 0.001;
float a = 40; // Máximo desplazamiento horizontal.
float b = 90; // Máximo desplazamiento vertical.
float vx = 120; // Velocidad lineal.
float q5 = PI / 2;
float T; // tiempo Real
float t;
float tau = a / vx; // Constante de ciclo
float p[3]; // Definir p
int L,ss,w,Lp;
//========================================================
int x=0;
int y=0;
float dt = 0;
float u;
float ti = 0;
int cont=0;
bool pos=false,pos2=false,arriba=false;
bool activo=false;
long previousMillis = 0; 
unsigned long intervalo = 500; 
// -------------------------------------------
float deg2rad(float deg) {
  float rad = deg * 1/57.2958;
  return rad;
}
/*
float q4[6] = {
0 * (2 * PI / 6), 
3 * (2 * PI / 6), 
0 * (2 * PI / 6), 
3 * (2 * PI / 6), 
0 * (2 * PI / 6), 
3 * (2 * PI / 6)
};
*/
float q4[6] = {
0 * (2 * PI / 6), 
3 * (2 * PI / 6), 
0 * (2 * PI / 6), 
3 * (2 * PI / 6), 
0 * (2 * PI / 6), 
3 * (2 * PI / 6)
};
// --------------joystick-----------------------------
float q[6][5];
// -------------------------------------------
float q_offset[6][3] = {
  {90, 90, 100}, // Definir L1
  {90, 90, 100}, // Definir L2
  {90, 90, 100}, // Definir L3
  {90, 90, 100}, // Definir L4
  {90, 90, 100}, // Definir L5
  {90, 90, 100} // Definir L6
};
float p1[]={90, 90, 100};
float p2[]={90, 90, 100};
float p3[]={90, 90, 100};
float p4[]={90, 90, 100};
float p5[]={90, 90, 100};//IVAN
float p6[]={90, 90, 100};
float q_offset2[6][3] = {
  {p1[0],p1[1],p1[2]}, // Definir L1
  {p2[0],p2[1],p2[2]}, // Definir L2
  {p3[0],p3[1],p3[2]}, // Definir L3
  {p4[0],p4[1],p4[2]}, // Definir L4
  {p5[0],p5[1],p5[2]}, // Definir L5
  {p6[0],p6[1],p6[2]} // Definir L6
};
float q_offset3[6][3] = {
  {p1[0],p1[1],p1[2]}, // Definir L1
  {p2[0],p2[1],p2[2]}, // Definir L2
  {p3[0],p3[1],p3[2]}, // Definir L3
  {p4[0],p4[1],p4[2]}, // Definir L4
  {p5[0],p5[1],p5[2]}, // Definir L5
  {p6[0],p6[1],p6[2]} // Definir L6
};
// -------------------------------------------
void setup() {
  Serial.begin(9600);  // Inicializa la comunicación serial
  Serial.println("Listo");  
  Serial1.begin(9600); 
  for(w=0;w<6;w++)
  {
    for(ss=0;ss<3;ss++)
    {
      q[w][ss]=0.0;
    }
  }
   for(w=0;w<6;w++)
  {
    q[w][3]=q4[w];
  }
  Initialization_set_1();
}
// -------------------------------------------
void loop() {
  //T = T + delta_t;
T = millis() * 0.001; // Capturamos el tiempo actual
  Serial.println(rad2deg(q[1][4]),2);
 
  if (Serial1.available())
  {
   //Serial.write(miBT.read());
   x=Serial1.read();
  switch(x)
   {
    case 'X':
    if(!pos2)
    {
      pos=false;
      Initialization_set_1();
      pos2=true;
    }
    
     q5 = PI*1.5;
     for(w=0;w<6;w++)
     {
      q[w][4]=q5;
     }
      Motion_set_1();
    break;
    case 'Y':
     if(!pos2)
    {
      pos=false;
      Initialization_set_1();
      pos2=true;
    }
     q5 = PI / 2;
     for(w=0;w<6;w++)
     {
      q[w][4]=q5;
     }
      Motion_set_1();
    break;
    case 'O':
     if(!pos2)
    {
      pos=false;
      Initialization_set_1();
      pos2=true;
    }
    q5 = 0;
     for(w=0;w<6;w++)
     {
      q[w][4]=q5;
     }
      Motion_set_2();
    break;
    case 'A':
     if(!pos2)
    {
      pos=false;
      Initialization_set_1();
      pos2=true;
    }
    q5 = PI;
     for(w=0;w<6;w++)
     {
      q[w][4]=q5;
     }
      Motion_set_2();
    break;
    
    //////////////////////////
    case 'U':
    if(!pos2)
    {
      pos=false;
      Initialization_set_1();
      pos2=true;
    }
    q5 = PI/4;
     for(w=0;w<6;w++)
     {
      q[w][4]=q5;
     }
      Motion_set_2();
       //UR
    break;
    case 'L':
    if(!pos2)
    {
      pos=false;
      Initialization_set_1();
      pos2=true;
    }
    q5 = PI*3/4;
     for(w=0;w<6;w++)
     {
      q[w][4]=q5;
     }
      Motion_set_2();
     //UL
    break;
    case 'D':
     if(!pos2)
    {
      pos=false;
      Initialization_set_1();
      pos2=true;
    }
    q5 = PI*5/4;
     for(w=0;w<6;w++)
     {
      q[w][4]=q5;
     }
      Motion_set_2();
     //DL
    break;
   ///////////////////////////
   case 'R':
  if(!pos2)
    {
      pos=false;
      Initialization_set_1();
      pos2=true;
    }
    q5 = PI*7/4;
     for(w=0;w<6;w++)
     {
      q[w][4]=q5;
     }
      Motion_set_2();
    //DR
    break;
    case 'H':
     if(!pos2)
    {
      pos=false;
      Initialization_set_1();
      pos2=true;
    }
    Initialization_set_1();
    //HOME
    break;
    case 'P':
    if(!pos2)
    {
      pos=false;
      Initialization_set_3();
      pos2=true;
    }
    q5 = PI / 2;
     for(w=0;w<6;w++)
     {
      q[w][4]=q5;
     }
      Motion_set_3();
    //GIRO IZQUIERDA
    break;
    case 'W':
    if(!pos2)
    {
      pos=false;
      Initialization_set_3();
      pos2=true;
    }
     q5 = PI / 2;
     for(w=0;w<6;w++)
     {
      q[w][4]=q5;
     }
      Motion_set_7();
    //GIRO DERECHA
    break;
    case 'T':
    if(!pos2)
    {
      pos=false;
      Initialization_set_3();
      pos2=true;
    }
    q5 = PI / 2;
     for(w=0;w<6;w++)
     {
      q[w][4]=q5;
     }
      Motion_set_4();
    //BAILA
    break;
    case 'F':
   /* Serial.write("*saluda*");
    Serial.write('\n');*/
   /* q_offset3[5][1]=70;
    q_offset3[5][2]=30;
    Initialization_set_3();*/
   if(!pos)
    {
      Serial.write("saludo");
    Serial.write('\n');
    //q_offset3[5][0]=10;
    q_offset3[0][1]=0;
    q_offset3[0][2]=30;
      pos=true;
      Initialization_set_3();
      pos2=false;
    
    }
      q5 = PI / 2;
     for(w=0;w<6;w++)
     {
      q[w][4]=q5;
     }
   
    Motion_set_5();
    //Saludo
    break;
    case 'Q':
   /* Serial.write("*T ataca*");
    Serial.write('\n');*/
   // q_offset2[5][0]=10;
   for(int t=0;t<6;t++){
    q_offset2[t][1]=135;}
   
    Initialization_set_2();
    // -------------------------------------------

    //posicion batalla
    break;
   }
   
  }
}
