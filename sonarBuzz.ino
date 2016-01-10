#define LOOP_DELAY  5000

#define BUZZER 6
#define BUZZER_SOUND 100
#define MAX_DISTANCE 20

#define SONAR_TRIG  2
#define SONAR_ECHO  4

int obstacleDistance;

void setup() {
  Serial.begin(9600);
  pinMode(BUZZER, OUTPUT);
  Serial.println("Sonar checking for obstacles.............");
}

void loop() {
  obstacleDistance = getSonar();
  if (obstacleDistance > MAX_DISTANCE || obstacleDistance <= 0){
    Serial.println("Safe from any Obstacles......");
    noTone(BUZZER);
  } else {
    tone(BUZZER, BUZZER_SOUND);
  }  
}

