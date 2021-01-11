enum SEGMENT_POSITIONS
{
  SEGMENT_POS_1 = 0,
  SEGMENT_POS_2 = 1,
  SEGMENT_POS_3 = 2,
  SEGMENT_POS_4 = 3
};

struct KEY
{
  int _keyId;
};

enum KEYS
{
  NUM_0 = 0,
  NUM_1 = 1,
  NUM_2 = 2,
  NUM_3 = 3,
  NUM_4 = 4,
  NUM_5 = 5,
  NUM_6 = 6,
  NUM_7 = 7,
  NUM_8 = 8,
  NUM_9 = 9,
  CHAR_A = 10,
  CHAR_C = 11,
  CHAR_E = 12,
  CHAR_F = 13,
  CHAR_H = 14,
  CHAR_I = 15,
  CHAR_L = 16,
  CHAR_P = 17,
  CHAR_U = 18,
  CHAR_DASH_BOTTOM = 19,
  CHAR_DASH_TOP = 20,
  CHAR_DASH = 21,
  CHAR_MINUS = 22,
  CHAR_EQUAL = 23,
  CHAR_SQUARE_BRACKET_LEFT = 24,
  CHAR_SQUARE_BRACKET_RIGHT = 25,
  CHAR_EQUAL_WIDE = 26
};

/*
  D1, D2, D3, D4 are the segment block positions
  PinA, B, C, D, E, F, G are segment positions
  
    A
   ---
F |   | B
  | G |
   ---
E |   | C
  |   |
   ---
    D
*/

// TOP ROW
int pinA = 3;
int pinB = 7;
int pinF = 4;
int D1 = 2;
int D2 = 5;
int D3 = 6;

// BOTTOM ROW
int pinC = 11;
int pinD = 12;
int pinE = 13;
int pinG = 10;
int D4 = 9;

void setup()
{
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);

  BootTest();
}

KEY pingPongKeys[6] = {
    CHAR_SQUARE_BRACKET_LEFT,
    CHAR_EQUAL_WIDE,
    CHAR_EQUAL_WIDE,
    CHAR_SQUARE_BRACKET_RIGHT,
    CHAR_DASH,
    CHAR_DASH};

KEY pingPongKeys2[6] = {
    CHAR_SQUARE_BRACKET_LEFT,
    CHAR_DASH,
    CHAR_DASH,
    CHAR_SQUARE_BRACKET_RIGHT,
    CHAR_EQUAL_WIDE,
    CHAR_EQUAL_WIDE};

void loop()
{
  PingPongLoop(pingPongKeys, random(64, 256));
  PingPongLoop(pingPongKeys2, random(64, 256));
}

void BootTest()
{
  int _delay = 500;
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  delay(_delay);
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  delay(_delay);
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, LOW);
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  delay(_delay);
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  delay(_delay);
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  delay(_delay);
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  delay(_delay);
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, LOW);
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  delay(_delay);
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  delay(_delay);
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  delay(_delay);

  KEY pingPongKeys[6] = {
      CHAR_SQUARE_BRACKET_LEFT,
      CHAR_EQUAL_WIDE,
      CHAR_EQUAL_WIDE,
      CHAR_SQUARE_BRACKET_RIGHT,
      CHAR_EQUAL_WIDE,
      CHAR_EQUAL_WIDE};

  KEY pingPongKeys2[6] = {
      CHAR_SQUARE_BRACKET_LEFT,
      CHAR_DASH,
      CHAR_DASH,
      CHAR_SQUARE_BRACKET_RIGHT,
      CHAR_DASH,
      CHAR_DASH};

  KEY pingPongKeys3[6] = {
      CHAR_SQUARE_BRACKET_LEFT,
      CHAR_DASH_TOP,
      CHAR_DASH_TOP,
      CHAR_SQUARE_BRACKET_RIGHT,
      CHAR_DASH_BOTTOM,
      CHAR_DASH_BOTTOM};

  PingPongLoop(pingPongKeys, 128);
  PingPongLoop(pingPongKeys2, 128);
  PingPongLoop(pingPongKeys3, 128);
  PingPongOnce(pingPongKeys, 128);
  DisplayKey(KEYS(-1), SEGMENT_POS_1, 0);
  DisplayKey(KEYS(-1), SEGMENT_POS_2, 0);
  DisplayKey(KEYS(-1), SEGMENT_POS_3, 0);
  DisplayKey(KEYS(-1), SEGMENT_POS_4, 0);
  delay(_delay);
}

void PingPongOnce(KEY keys[6], int delayTime)
{
  DisplayKey(KEYS(keys[0]._keyId), SEGMENT_POS_1, delayTime);
  DisplayKey(KEYS(keys[1]._keyId), SEGMENT_POS_2, delayTime);
  DisplayKey(KEYS(keys[2]._keyId), SEGMENT_POS_3, delayTime);
  DisplayKey(KEYS(keys[3]._keyId), SEGMENT_POS_4, delayTime);
  DisplayKey(KEYS(keys[4]._keyId), SEGMENT_POS_3, delayTime);
  DisplayKey(KEYS(keys[5]._keyId), SEGMENT_POS_2, delayTime);
  DisplayKey(KEYS(keys[0]._keyId), SEGMENT_POS_1, delayTime);
}

void PingPongLoop(KEY keys[6], int delayTime)
{
  DisplayKey(KEYS(keys[0]._keyId), SEGMENT_POS_1, delayTime);
  DisplayKey(KEYS(keys[1]._keyId), SEGMENT_POS_2, delayTime);
  DisplayKey(KEYS(keys[2]._keyId), SEGMENT_POS_3, delayTime);
  DisplayKey(KEYS(keys[3]._keyId), SEGMENT_POS_4, delayTime);
  DisplayKey(KEYS(keys[4]._keyId), SEGMENT_POS_3, delayTime);
  DisplayKey(KEYS(keys[5]._keyId), SEGMENT_POS_2, delayTime);
}

void DisplayKey(KEYS key, SEGMENT_POSITIONS position, int delayTime)
{
  // Needs at least 1ms delay otherwise segments don't display correctly.
  if (delayTime < 1)
    delayTime = 1;

  switch (position)
  {
  case SEGMENT_POS_1:
    digitalWrite(D1, HIGH);
    digitalWrite(D2, LOW);
    digitalWrite(D3, LOW);
    digitalWrite(D4, LOW);
    break;

  case SEGMENT_POS_2:
    digitalWrite(D1, LOW);
    digitalWrite(D2, HIGH);
    digitalWrite(D3, LOW);
    digitalWrite(D4, LOW);
    break;

  case SEGMENT_POS_3:
    digitalWrite(D1, LOW);
    digitalWrite(D2, LOW);
    digitalWrite(D3, HIGH);
    digitalWrite(D4, LOW);
    break;

  case SEGMENT_POS_4:
    digitalWrite(D1, LOW);
    digitalWrite(D2, LOW);
    digitalWrite(D3, LOW);
    digitalWrite(D4, HIGH);
    break;

  default:
    digitalWrite(D1, LOW);
    digitalWrite(D2, LOW);
    digitalWrite(D3, LOW);
    digitalWrite(D4, LOW);
    break;
  }

  switch (key)
  {
  case NUM_0:
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinG, HIGH);
    delay(delayTime);
    break;
  case NUM_1:
    digitalWrite(pinA, HIGH);
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinD, HIGH);
    digitalWrite(pinE, HIGH);
    digitalWrite(pinF, HIGH);
    digitalWrite(pinG, HIGH);
    delay(delayTime);
    break;
  case NUM_2:
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, HIGH);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, HIGH);
    digitalWrite(pinG, LOW);
    delay(delayTime);
    break;
  case NUM_3:
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, HIGH);
    digitalWrite(pinF, HIGH);
    digitalWrite(pinG, LOW);
    delay(delayTime);
    break;
  case NUM_4:
    digitalWrite(pinA, HIGH);
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinD, HIGH);
    digitalWrite(pinE, HIGH);
    digitalWrite(pinF, LOW);
    digitalWrite(pinG, LOW);
    delay(delayTime);
    break;
  case NUM_5:
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, HIGH);
    digitalWrite(pinC, LOW);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, HIGH);
    digitalWrite(pinF, LOW);
    digitalWrite(pinG, LOW);
    delay(delayTime);
    break;
  case NUM_6:
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, HIGH);
    digitalWrite(pinC, LOW);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinG, LOW);
    delay(delayTime);
    break;
  case NUM_7:
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinD, HIGH);
    digitalWrite(pinE, HIGH);
    digitalWrite(pinF, HIGH);
    digitalWrite(pinG, HIGH);
    delay(delayTime);
    break;
  case NUM_8:
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinG, LOW);
    delay(delayTime);
    break;
  case NUM_9:
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, HIGH);
    digitalWrite(pinF, LOW);
    digitalWrite(pinG, LOW);
    delay(delayTime);
    break;
  case CHAR_A:
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinD, HIGH);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinG, LOW);
    delay(delayTime);
    break;
  case CHAR_C:
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, HIGH);
    digitalWrite(pinC, HIGH);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinG, HIGH);
    delay(delayTime);
    break;
  case CHAR_E:
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, HIGH);
    digitalWrite(pinC, HIGH);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinG, LOW);
    delay(delayTime);
    break;
  case CHAR_F:
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, HIGH);
    digitalWrite(pinC, HIGH);
    digitalWrite(pinD, HIGH);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinG, LOW);
    delay(delayTime);
    break;
  case CHAR_H:
    digitalWrite(pinA, HIGH);
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinD, HIGH);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinG, LOW);
    delay(delayTime);
    break;
  case CHAR_I:
    digitalWrite(pinA, HIGH);
    digitalWrite(pinB, HIGH);
    digitalWrite(pinC, HIGH);
    digitalWrite(pinD, HIGH);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinG, HIGH);
    delay(delayTime);
    break;
  case CHAR_L:
    digitalWrite(pinA, HIGH);
    digitalWrite(pinB, HIGH);
    digitalWrite(pinC, HIGH);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinG, HIGH);
    delay(delayTime);
    break;
  case CHAR_P:
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, HIGH);
    digitalWrite(pinD, HIGH);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinG, LOW);
    delay(delayTime);
    break;
  case CHAR_U:
    digitalWrite(pinA, HIGH);
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinG, HIGH);
    delay(delayTime);
    break;
  case CHAR_DASH_BOTTOM:
    digitalWrite(pinA, HIGH);
    digitalWrite(pinB, HIGH);
    digitalWrite(pinC, HIGH);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, HIGH);
    digitalWrite(pinF, HIGH);
    digitalWrite(pinG, HIGH);
    delay(delayTime);
    break;
  case CHAR_DASH_TOP:
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, HIGH);
    digitalWrite(pinC, HIGH);
    digitalWrite(pinD, HIGH);
    digitalWrite(pinE, HIGH);
    digitalWrite(pinF, HIGH);
    digitalWrite(pinG, HIGH);
    delay(delayTime);
    break;
  case CHAR_MINUS:
    digitalWrite(pinA, HIGH);
    digitalWrite(pinB, HIGH);
    digitalWrite(pinC, HIGH);
    digitalWrite(pinD, HIGH);
    digitalWrite(pinE, HIGH);
    digitalWrite(pinF, HIGH);
    digitalWrite(pinG, LOW);
    delay(delayTime);
    break;
  case CHAR_DASH:
    digitalWrite(pinA, HIGH);
    digitalWrite(pinB, HIGH);
    digitalWrite(pinC, HIGH);
    digitalWrite(pinD, HIGH);
    digitalWrite(pinE, HIGH);
    digitalWrite(pinF, HIGH);
    digitalWrite(pinG, LOW);
    delay(delayTime);
    break;
  case CHAR_EQUAL:
    digitalWrite(pinA, HIGH);
    digitalWrite(pinB, HIGH);
    digitalWrite(pinC, HIGH);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, HIGH);
    digitalWrite(pinF, HIGH);
    digitalWrite(pinG, LOW);
    delay(delayTime);
    break;
  case CHAR_SQUARE_BRACKET_LEFT:
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, HIGH);
    digitalWrite(pinC, HIGH);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinG, HIGH);
    delay(delayTime);
    break;
  case CHAR_SQUARE_BRACKET_RIGHT:
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, HIGH);
    digitalWrite(pinF, HIGH);
    digitalWrite(pinG, HIGH);
    delay(delayTime);
    break;
  case CHAR_EQUAL_WIDE:
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, HIGH);
    digitalWrite(pinC, HIGH);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, HIGH);
    digitalWrite(pinF, HIGH);
    digitalWrite(pinG, HIGH);
    delay(delayTime);
    break;
  default:
    digitalWrite(pinA, HIGH);
    digitalWrite(pinB, HIGH);
    digitalWrite(pinC, HIGH);
    digitalWrite(pinD, HIGH);
    digitalWrite(pinE, HIGH);
    digitalWrite(pinF, HIGH);
    digitalWrite(pinG, HIGH);
    delay(delayTime);
    break;
  }
}
