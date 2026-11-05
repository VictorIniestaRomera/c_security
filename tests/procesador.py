import math

def calcular_area_segura(radio_str):
    """
    Valida y calcula el área de un círculo garantizando la estabilidad del servicio.
    """
    try:
        radio = float(radio_str)

        if radio < 0:
            raise ValueError("El radio no puede ser negativo.")
        
        area = math.pi * (radio ** 2)

        return round(area, 4)
    except (ValueError, TypeError) as e:
        return f"Error de entrada: {e}" 