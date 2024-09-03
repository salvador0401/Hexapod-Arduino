void Initialization_set_1() {
  /*
  int Pin[6][3] = {
    {28, 29, 30}, // Definir L1
    {25, 26, 27}, // Definir L2
    {22, 23, 24},  // Definir L3
    {31, 32, 33}, // Definir L4
    {34, 35, 36}, // Definir L5
    {37, 38, 39}, // Definir L6
  };
  */
  int Pin[6][3] = {
    {24, 23, 22}, // Definir L1
    {27, 26, 25}, // Definir L2
    {30, 29, 28},  // Definir L3
    {33, 32, 31}, // Definir L4
    {36, 35, 34}, // Definir L5
    {39, 38, 37}, // Definir L6
  };
  // -------------------------------------------
     for(int a=0;a<6;a++)
    {
     PATAS[a][0].attach(Pin[a][0]);
     PATAS[a][0].writeMicroseconds(1500);
     PATAS[a][0].write(q_offset[a][0]);
    
     PATAS[a][1].attach(Pin[a][1]);
     PATAS[a][1].writeMicroseconds(1500);
     PATAS[a][1].write(q_offset[a][1]);

     PATAS[a][2].attach(Pin[a][2]);
     PATAS[a][2].writeMicroseconds(1500);
     PATAS[a][2].write(q_offset[a][2]);
    }
}
void Initialization_set_2() {
  /*
  int Pin[6][3] = {
    {28, 29, 30}, // Definir L1
    {25, 26, 27}, // Definir L2
    {22, 23, 24},  // Definir L3
    {31, 32, 33}, // Definir L4
    {34, 35, 36}, // Definir L5
    {37, 38, 39}, // Definir L6
  };
  */
  int Pin[6][3] = {
    {22, 24, 26}, // Definir L1
    {28, 30, 32}, // Definir L2
    {34, 36, 38},  // Definir L3
    {40, 42, 44}, // Definir L4
    {43, 45, 47}, // Definir L5
    {49, 51, 53}, // Definir L6
  };
  // -------------------------------------------
     for(int a=0;a<6;a++)
    {
     PATAS[a][0].attach(Pin[a][0]);
     PATAS[a][0].writeMicroseconds(1500);
     PATAS[a][0].write(q_offset2[a][0]);
    
     PATAS[a][1].attach(Pin[a][1]);
     PATAS[a][1].writeMicroseconds(1500);
     PATAS[a][1].write(q_offset2[a][1]);

     PATAS[a][2].attach(Pin[a][2]);
     PATAS[a][2].writeMicroseconds(1500);
     PATAS[a][2].write(q_offset2[a][2]);
    }
}
void Initialization_set_3() {
  /*
  int Pin[6][3] = {
    {28, 29, 30}, // Definir L1
    {25, 26, 27}, // Definir L2
    {22, 23, 24},  // Definir L3
    {31, 32, 33}, // Definir L4
    {34, 35, 36}, // Definir L5
    {37, 38, 39}, // Definir L6
  };
  */
  int Pin[6][3] = {
    {22, 24, 26}, // Definir L1
    {28, 30, 32}, // Definir L2
    {34, 36, 38},  // Definir L3
    {40, 42, 44}, // Definir L4
    {43, 45, 47}, // Definir L5
    {49, 51, 53}, // Definir L6
  };
  // -------------------------------------------
     for(int a=0;a<6;a++)
    {
     PATAS[a][0].attach(Pin[a][0]);
     PATAS[a][0].writeMicroseconds(1500);
     PATAS[a][0].write(q_offset3[a][0]);
    
     PATAS[a][1].attach(Pin[a][1]);
     PATAS[a][1].writeMicroseconds(1500);
     PATAS[a][1].write(q_offset3[a][1]);

     PATAS[a][2].attach(Pin[a][2]);
     PATAS[a][2].writeMicroseconds(1500);
     PATAS[a][2].write(q_offset3[a][2]);
    }
}
