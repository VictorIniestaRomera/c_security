import pytest
from procesador import calcular_area_segura

@pytest.mark.parametrize(
    ("radio", "area_esperada"),
    [
        ("5", 78.5398),
        ("1.5", 7.0686),
        ("0", 0.0)
    ]
)
def test_calcula_area_para_radios_validos(radio, area_esperada):
    assert calcular_area_segura(radio) == pytest.approx(area_esperada)

@pytest.mark.parametrize(
    ("radio", "mensaje_esperado"),
    [
        ("-5", "no puede ser negativo"),
        ("texto_invalido", "Error de entrada"),
        ("", "Error de entrada"),
        (None, "Error de entrada")
    ]
)
def test_rechaza_radios_invalidos(radio, mensaje_esperado):
    resultado = calcular_area_segura(radio)
    
    assert mensaje_esperado in resultado