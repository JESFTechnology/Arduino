void wifiIcon(int x, int y, bool active){
  if(active == true){
  tft.fillCircle(x, y, 20, WHITE);
  tft.fillCircle(x, y, 18, BLACK);
  tft.fillCircle(x, y+4, 20, BLACK);

  tft.fillCircle(x, y+2, 15, WHITE);
  tft.fillCircle(x, y+2, 13, BLACK);
  tft.fillCircle(x, y+4+2, 15, BLACK);

  tft.fillCircle(x ,y+4, 10, WHITE);
  tft.fillCircle(x ,y+4, 8, BLACK);
  tft.fillCircle(x ,y+4+4, 10, BLACK);

  tft.fillCircle(x ,y+4, 5, WHITE);

  }else{

  tft.fillCircle(x ,y, 20, RED);
  tft.fillCircle(x ,y, 18, BLACK);
  tft.fillCircle(x ,y+4, 20, BLACK);

  tft.fillCircle(x ,y+2, 15, RED);
  tft.fillCircle(x ,y+2, 13, BLACK);
  tft.fillCircle(x ,y+4+2, 15, BLACK);

  tft.fillCircle(x ,y+4, 10, RED);
  tft.fillCircle(x ,y+4, 8, BLACK);
  tft.fillCircle(x ,y+4+4, 10, BLACK);

  tft.fillCircle(x ,y+4, 5, RED);

  }
}
