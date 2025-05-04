package Esercitazione82.ProvePreTest1;

import java.util.Objects;

public class Auto {

    private String marca;
    private String modello;
    private int anni;

    public Auto(String marca, String modello, int anni) {
        this.marca = marca;
        this.modello = modello;
        this.anni = anni;
    }

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getModello() {
        return modello;
    }

    public void setModello(String modello) {
        this.modello = modello;
    }

    public int getAnni() {
        return anni;
    }

    public void setAnni(int anni) {
        this.anni = anni;
    }

    @Override
    public boolean equals(Object o) {
        if (o == null || getClass() != o.getClass()) return false;
        Auto auto = (Auto) o;
        return anni == auto.anni && Objects.equals(marca, auto.marca) && Objects.equals(modello, auto.modello);
    }

    @Override
    public int hashCode() {
        return Objects.hash(marca, modello, anni);
    }

    @Override
    public String toString() {
        return "Auto{" +
                "marca='" + marca + '\'' +
                ", modello='" + modello + '\'' +
                ", anni=" + anni +
                '}';
    }
}
