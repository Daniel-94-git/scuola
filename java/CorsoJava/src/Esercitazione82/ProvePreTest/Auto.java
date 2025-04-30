package ProvePreTest;

import java.util.Objects;

public class Auto {

    private String marca;
    private String modello;
    private int anno;

    public Auto(String marca, String modello, int anno) {
        this.marca = marca;
        this.modello = modello;
        this.anno = anno;
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

    public int getAnno() {
        return anno;
    }

    public void setAnno(int anno) {
        this.anno = anno;
    }

    @Override
    public boolean equals(Object o) {
        if (o == null || getClass() != o.getClass()) return false;
        Auto auto = (Auto) o;
        return anno == auto.anno && Objects.equals(marca, auto.marca) && Objects.equals(modello, auto.modello);
    }

    @Override
    public int hashCode() {
        return Objects.hash(marca, modello, anno);
    }

    @Override
    public String toString() {
        return "Auto{" +
                "marca='" + marca + '\'' +
                ", modello='" + modello + '\'' +
                ", anno=" + anno +
                '}';
    }
}
