void Motion_set_1() {
  // -------------------------------------------
   boolean flag_par=false;
  Trajectory(p, 0);
  L = 0;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  PATAS[L][0].write(q_offset[L][0] + int(PI - rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
  PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));

  L = 2;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  PATAS[L][0].write(q_offset[L][0] + int(PI - rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
  PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));

  L = 4;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  PATAS[L][0].write(q_offset[L][0] + int(rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
  PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));
  // -------------------------------------------
  Trajectory(p, 2 * tau);
  L = 1;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  PATAS[L][0].write(q_offset[L][0] + int(rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
  PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));

  L = 3;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
   PATAS[L][0].write(q_offset[L][0] + int(PI - rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
 PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));

  L = 5;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  PATAS[L][0].write(q_offset[L][0] + int(PI - rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
  PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));
  // -------------------------------------------
}
void Motion_set_2() {
  // -------------------------------------------
   boolean flag_par=false;
  Trajectory(p, 0);
  L = 0;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  PATAS[L][0].write(q_offset[L][0] + int(PI - rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
  PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));

  L = 2;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  PATAS[L][0].write(q_offset[L][0] + int(PI - rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
  PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));

  L = 4;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  PATAS[L][0].write(q_offset[L][0] + int(rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
  PATAS[L][2].write(q_offset[L][2] + int(PI-rad2deg(q[L][2])));
  // -------------------------------------------
  Trajectory(p, 2 * tau);
  L = 1;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  PATAS[L][0].write(q_offset[L][0] + int(rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
  PATAS[L][2].write(q_offset[L][2] + int(PI-rad2deg(q[L][2])));

  L = 3;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
   PATAS[L][0].write(q_offset[L][0] + int(PI - rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
 PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));

  L = 5;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  PATAS[L][0].write(q_offset[L][0] + int(PI - rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
  PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));
  // -------------------------------------------
}
void Motion_set_3() 
{
   Trajectory(p, 0);
  L = 0;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  PATAS[L][0].write(q_offset[L][0] + int(PI - rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
  PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));

  L = 2;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  PATAS[L][0].write(q_offset[L][0] + int(PI - rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
  PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));

  L = 4;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  PATAS[L][0].write(q_offset[L][0] + int(PI - rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
  PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));
  // -------------------------------------------
  Trajectory(p, 2 * tau);
  L = 1;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  PATAS[L][0].write(q_offset[L][0] + int(rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
  PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));

  L = 3;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
   PATAS[L][0].write(q_offset[L][0] + int(rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
 PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));

  L = 5;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  PATAS[L][0].write(q_offset[L][0] + int(rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
  PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));
  // -------------------------------------------
}
void Motion_set_4() 
{
   Trajectory(p, 0);
  L = 0;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  PATAS[L][0].write(q_offset[L][0] + int(PI - rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
  PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));

  L = 2;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  PATAS[L][0].write(q_offset[L][0] + int(PI - rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
  PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));

  L = 4;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  PATAS[L][0].write(q_offset[L][0] + int(PI - rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
  PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));
  // -------------------------------------------
  Trajectory(p, 2 * tau);
  L = 1;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  PATAS[L][0].write(q_offset[L][0] + int(PI -rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
  PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));

  L = 3;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
   PATAS[L][0].write(q_offset[L][0] + int(PI -rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
 PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));

  L = 5;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  PATAS[L][0].write(q_offset[L][0] + int(PI -rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
  PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));
  // -------------------------------------------
}
void Motion_set_5() 
{
  
  L = 0;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  PATAS[L][2].write(q_offset3[L][2] + int(rad2deg(q[L][2])));
 // PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
 // PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));
  // -------------------------------------------
  
  L = 2;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }

  L = 4;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  Trajectory(p, 2 * tau);
  L = 1;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }

  L = 3;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  L = 5;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
}
void Motion_set_7() 
{
   Trajectory(p, 0);
  L = 0;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  PATAS[L][0].write(q_offset[L][0] + int(rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
  PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));

  L = 2;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  PATAS[L][0].write(q_offset[L][0] + int(rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
  PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));

  L = 4;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  PATAS[L][0].write(q_offset[L][0] + int(rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
  PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));
  // -------------------------------------------
  Trajectory(p, 2 * tau);
  L = 1;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  PATAS[L][0].write(q_offset[L][0] + int(PI - rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
  PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));

  L = 3;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
   PATAS[L][0].write(q_offset[L][0] + int(PI - rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
 PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));

  L = 5;
  IK(p, q, L);
  for (int r = 0; r <= 2; r++) {
    q[L][r] = q[L][r] + delta_q[L][r];
    }
  PATAS[L][0].write(q_offset[L][0] + int(PI - rad2deg(q[L][0])));
  PATAS[L][1].write(q_offset[L][1] + int(rad2deg(q[L][1])));
  PATAS[L][2].write(q_offset[L][2] + int(rad2deg(q[L][2])));
  // -------------------------------------------
}
