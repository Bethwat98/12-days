
String suffix (int dayOfChristmas) {
  String number;

  switch(dayOfChristmas) {
    case 1:
      number = "st";
      break;

    case 2:
      number = "nd";
      break;

    case 3:
     number = "rd";
     break;

    default:
    number = "th";
    break;
  }
  return number;
}


String messageForDaysOfChristmas(int dayOfChristmas) {
  String message;

  switch (dayOfChristmas) {
    case 1:
      message = "A Working Counting Song";
      break;

    case 2:
      message = "Two Hard Drives";
      break; 
      //not correct but kind of fits
    case 3:
      message = "Three C Codes";
      break;

    case 4:
      message = "Four Sailingbots";
      break; 
      
    case 5:
      message = "Five Ar-dino";
      break;

    case 6:
      message = "Six Gamers Gaming";
      break;
 // Sorry but it had to be done :)       
    case 7:
      message = "Seven Andy's Coughing";
      break;

    case 8:
      message = "Eight Phones a Charging ";
      break; 
      
    case 9:
      message = "Nine Bugs Debuging ";
      break;

    case 10:
      message = "Ten Programs Running";
      break; 
      
    case 11:
      message = "Eleven Coders Coding ";
      break;

    case 12:
      message = "Twelve Students Sleeping";
      break; 
      
    default:
      message = "Faults needing fixing";
      break;
  }
  return message;
}


const int numDaysOfChristmas = 12;

void printMessageForDayOfChristmas(int daysOfChristmas) {
  Serial.print("On the ");
  Serial.print(daysOfChristmas);
  Serial.print(suffix (daysOfChristmas));
  Serial.print(" day of Christmas my true love gave to me ");
  Serial.print(messageForDaysOfChristmas(daysOfChristmas));
  if (daysOfChristmas > 1){
    Serial.print(", ");
  }
  for (int i = (daysOfChristmas - 1); i >= 1; i--){
    if (i <= 1){
      Serial.print(" and ");
    }
    Serial.print(messageForDaysOfChristmas(i));
    
    if (i > 2){
     Serial.print(", ");
    }
    
  }
  Serial.println("");
}

//void wholeSong (int x){
//  for(int day = x; day > 1; day--){
//    Serial.print(" ");
//    Serial.print(printMessageForDaysOfChristmas(day));
//  }
//}


void setup() {
  Serial.begin(9600);// put your setup code here, to run once:
  for(int day = 1; day <= numDaysOfChristmas; day++) {
   printMessageForDayOfChristmas(day);
  }
}


void loop() {
  // put your main code here, to run repeatedly:
}
