void main_code(void) {
  
  //Request SLO1 to get the weather measurements and store in the various variables
  lux = SL01.getLUX(); 

   // Display the recoreded data on the OLED screen
   OD01.set2X();
   OD01.println("SL01 Data");
  
  OD01.set1X();
  OD01.println("Shine your phone");
  OD01.println("flash on the sensor");
  OD01.println("to increase LUX");
  
  OD01.print("Light:");
  OD01.print(lux);
  OD01.println("LUX");
  
  uv = SL01.getUVA();
  OD01.print("UVA  :");
  OD01.print(uv);
  OD01.println(" uW/m^2");
  
  uv = SL01.getUVB();
  OD01.print("UVB  :");
  OD01.print(uv);
  OD01.print(" uW/m^2");
  
  
}

