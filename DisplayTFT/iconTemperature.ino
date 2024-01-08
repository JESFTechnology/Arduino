void temperatureIcon(int x, int y, int temp_min, int temp_max, int temp, int h){
  if(temp_min > temp || temp_max < temp){
  
  tft.fillCircle(x ,y, 8, RED);

  for(int z =0; z<3; z++){
    tft.fillRect(x-20, y+z*10, 6, h/10, RED);
  }

  tft.fillRect(x-8, y, 17, h, RED);

  tft.fillCircle(x ,y+h, 10, RED);

  for(int z = 0; z <h; z++){
    tft.fillCircle(x ,y+z, 6, BLACK);
  }

  tft.fillCircle(x ,y+h, 8, BLACK);
  tft.fillCircle(x ,y+h, 4, RED);

  for(int z = 0; z < h; z++){
    tft.fillCircle(x ,(y+h)-z, 2, RED);
  }

  }else{

  tft.fillCircle(x ,y, 8, GREEN);

  for(int z =0; z<3; z++){
    tft.fillRect(x-20, y+z*10, 6, h/10, GREEN);
  }

  tft.fillRect(x-8, y, 17, h, GREEN);

  tft.fillCircle(x ,y+h, 10, GREEN);

  for(int z = 0; z < h; z++){
    tft.fillCircle(x ,y+z, 6, BLACK);
  }

  tft.fillCircle(x ,y+h, 8, BLACK);
  tft.fillCircle(x ,y+h, 4, GREEN);

  for(int z = 0; z < h; z++){
    tft.fillCircle(x ,(y+h)-z, 2, GREEN);
  }
  }
}
