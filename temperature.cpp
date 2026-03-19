#include<iostream>
#include<iomanip>
#include <cctype>
void celsius_conversion(double celsius,double& fahrenheit,double& kelvin)
{
   fahrenheit=(celsius*1.8)+32;
   kelvin=celsius+273.15;
  
  }
void kelvin_conversion(double kelvin,double& fahrenheit,double& celsius) 
{   
  celsius=kelvin-273.15;
  fahrenheit= ((celsius)*1.8)+32;    
  
  } 
void fahrenheit_conversion(double fahrenheit,double& kelvin,double& celsius)
{ 
    celsius=  (fahrenheit-32)*(5.0/9);
    kelvin= celsius+273.15;    
 
  }  
void display(double celsius,double fahrenheit,double kelvin)
{
  std::cout<<"-------------------------------------------------"<<std::endl;  
  std::cout<<std::setw(12)<<"celsius";
  std::cout<<std::setw(15)<<"fahrenheit";
  std::cout<<std::setw(12)<<"kelvin"<<std::endl;

  std::cout<<std::setw(10)<<std::fixed<<std::setprecision(2)<<celsius<<"°C";
  std::cout<<std::setw(10)<<std::fixed<<std::setprecision(2)<<fahrenheit<<"°F";
  std::cout<<std::setw(15)<<std::fixed<<std::setprecision(2)<<kelvin<<"K"<<std::endl;
  std::cout<<"-------------------------------------------------"<<std::endl;  
  } 
int main()
{ 
    std::cout<<"========TEMPERATURE CONVERTER========"<<std::endl;  
   char unit;
   while(true) 
  {
   std::cout<<"enter unit of temperature(c/k/f):";
     std::cin>>unit;
     unit=std::tolower(unit);
     if(unit=='c'||unit=='k'||unit=='f')
     {
        break;
       }          
      else{
        std::cout<<"Invalid character!Try again."<<std::endl;
        }              
  }
      double celsius=0;
      double fahrenheit=0;
      double kelvin=0; 
              
      switch(unit)
{
     case 'c': 
       std::cout<<"enter temprature value:";
       std::cin>>celsius;
  celsius_conversion(celsius,fahrenheit,kelvin);
      display(celsius,fahrenheit,kelvin); 
      break;       
     case 'f':
         std::cout<<"enter temprature value:";
       std::cin>>fahrenheit;
  fahrenheit_conversion(fahrenheit,kelvin,celsius);
        display(celsius,fahrenheit,kelvin);
        break;         
      case 'k':
      std::cout<<"enter temprature value:";
       std::cin>>kelvin;
     kelvin_conversion(kelvin,fahrenheit,celsius);
     display(celsius,fahrenheit,kelvin);
       break;
  }        
  return 0;
}    