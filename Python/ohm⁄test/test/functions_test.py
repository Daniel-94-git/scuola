import source.test_functions as f
import pytest


def test_tensione():
    assert f.tensione(10, 2) == 20
    assert f.tensione(20, 2) == 40
    
def test_resistenza():
    assert f.resistenza(10, 2) == 5
    assert f.resistenza(20, 2) == 10
    
def test_corrente():
    assert f.corrente(50, 2) == 25
    assert f.corrente(100, 2) == 50

