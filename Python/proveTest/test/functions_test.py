import source.functions as f
import pytest



def test_somma():
    assert f. somma(5,5) == 10
    assert f. somma(10,5) == 15

def test_sottrazione():
    assert f. sottrazzione(5,5) == 0
    assert f. sottrazzione(10,5) == 5

def test_moltiplicazione():
    assert f. moltiplicazione(5,5) == 25
    assert f. moltiplicazione(10,5) == 50

def test_divisione():
    assert f. divisione(5,5) == 1
    assert f. divisione(10,5) == 2
    
def test_potenza():
    assert f. potenza(5,2) == 25
    assert f. potenza(5,5) == 3125