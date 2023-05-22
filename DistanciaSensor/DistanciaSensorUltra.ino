// Defina as conexões do sensor ultrasônico
#define TRIGGER_PIN 2
#define ECHO_PIN 3
//trigger -> envia o sinal
//echo recebe o sinal
void setup() {
  Serial.begin(300); // Inicializa a comunicação serial
  pinMode(TRIGGER_PIN, OUTPUT); // Configura o pino do trigger como saída 
  pinMode(ECHO_PIN, INPUT); // Configura o pino do echo como entrada
}

void loop() {
  // Envia um pulso curto no pino de trigger
  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN, LOW);

  // Mede o tempo de duração do pulso do echo
  long duracao = pulseIn(ECHO_PIN, HIGH);

  // Calcula a distância em centímetros
  int distancia = duracao * 0.034 / 2;

  // Imprime a distância no Monitor Serial
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

  delay(500); // Aguarda um intervalo antes da próxima medição
}
