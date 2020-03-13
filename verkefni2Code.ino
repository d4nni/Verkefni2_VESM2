#define ROW_1 2
#define ROW_2 7
#define ROW_3 A5
#define ROW_4 5
#define ROW_5 13
#define ROW_6 A4
#define ROW_7 12
#define ROW_8 A2

#define COL_1 6
#define COL_2 11
#define COL_3 10
#define COL_4 3
#define COL_5 A3
#define COL_6 4
#define COL_7 8
#define COL_8 9

const byte rows[] = {
    // 2    7      A5     5      13     A4     12     A2
    ROW_1, ROW_2, ROW_3, ROW_4, ROW_5, ROW_6, ROW_7, ROW_8
};
const byte col[] = {
  // 6    11     10     3      A3     4      8      9
  COL_1,COL_2, COL_3, COL_4, COL_5, COL_6, COL_7, COL_8
};

float timeCount = 0;

void setup() 
{
    // Open serial port
    
    
    // Set all used pins to OUTPUT
    // This is very important! If the pins are set to input
    // the display will be very dim.
    for (byte i = 2; i <= 13; i++)
        pinMode(i, OUTPUT);
    pinMode(A2, OUTPUT);
    pinMode(A3, OUTPUT);
    pinMode(A4, OUTPUT);
    pinMode(A5, OUTPUT);
}

void loop() {
  // This could be rewritten to not use a delay, which would make it appear brighter

boomer();
delay(100);
ok();
delay(100);
yeah();

}

void boomer() {
  for (byte i = 0; i < 8; i++) {
    digitalWrite(rows[i], LOW);
    delay(100);
    for (byte x = 0; x < 8; x++) {
      digitalWrite(col[x], HIGH);
      delay(100);

      digitalWrite(col[x], LOW);
    }
  digitalWrite(rows[i], HIGH);
}
}

void ok() {
  for (byte i = 0; i < 8; i++) {
    digitalWrite(rows[i], LOW);
    delay(100);
    for (byte x = 0; x < 8; x++) {
      digitalWrite(col[x], HIGH);
      delay(100);
    digitalWrite(col[x], LOW);
    }
}
}
void yeah() {
  for (byte i = 0; i < 8; i++) {
    digitalWrite(rows[i], LOW);
    delay(100);
    for (byte x = 0; x < 8; x++) {
      digitalWrite(col[x], HIGH);
      delay(10);  
    }
}
}
