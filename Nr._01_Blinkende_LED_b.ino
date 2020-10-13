// Schwarz, bunt = Code und Grau = Erklärungen

// Hier beginnt das Setup
void setup(){  // geschweifte Klammer auf – Hier beginnt ein Programmabschnitt.
  pinMode(13, OUTPUT);  // Pin 13 soll ein Ausgang sein.
}  // geschweifte Klammer zu
// Hier ist ein Programmabschnitt beendet.

// Hier beginnt das Hauptprogramm
void loop(){  // Programmabschnitt beginnt.
  digitalWrite(13, HIGH); // Schalte die die Spannung an Pin13 ein (LED an).
  delay(200);  // Warte 200 Millisekunden (0,2 Sekunde).
  digitalWrite(13, LOW);  // Schalte die die Spannung an Pin13 aus (LED aus).
  delay(200);  // Warte 200 Millisekunden (0,2 Sekunde).
}  // Programmabschnitt beendet.
