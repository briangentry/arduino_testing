int Dash() {
digitalWrite(13, HIGH); delay(1500); digitalWrite(13, LOW); delay(500);
}

int Dot() {
digitalWrite(13, HIGH); delay(500); digitalWrite(13, LOW); delay(500);
}

int A() {
Dot(), Dash()
}







