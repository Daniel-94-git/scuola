package lab2_3Tps;

public class Auto {
    // Attributi
    String marca;
    int velocità;
    // Costruttore
    public Auto(String marca) {
        this.marca = marca;
        this.velocità = 0;
    }
    // Metodi
    void accelera() {
        velocità += 10;
        System.out.println("Vroom! Velocità: " + velocità);
    }
    void frena() {
        if (velocità > 0) velocità -= 10;
        System.out.println("Frenata! Velocità: " + velocità);
    }
}
