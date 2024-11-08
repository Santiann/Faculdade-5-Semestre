from collections import Counter
import re

class UtilitariosAnaliseTexto:
    def __init__(self, texto=""):
        self.texto = texto

    def contar_palavras_unicas(self):
        palavras = set(self.texto.lower().split())
        return len(palavras)

    def eh_anagrama(self, palavra1, palavra2):
        return sorted(palavra1.lower()) == sorted(palavra2.lower())

    def frequencia_caracteres(self):
        caracteres = [char.lower() for char in self.texto if char.isalnum()]
        return dict(Counter(caracteres))

    def palavras_unicas_ordenadas(self):
        palavras = set(self.texto.lower().split())
        return sorted(palavras)

    def palavra_mais_longa(self):
        palavras = self.texto.split()
        return max(palavras, key=len) if palavras else ""

    def prefixo_comum(self, lista_palavras):
        if not lista_palavras:
            return ""
        lista_palavras.sort()
        primeira, ultima = lista_palavras[0], lista_palavras[-1]
        i = 0
        while i < len(primeira) and i < len(ultima) and primeira[i] == ultima[i]:
            i += 1
        return primeira[:i]

    def contar_frases(self):
        frases = [frase.strip() for frase in re.split(r'[.!?]+', self.texto) if frase.strip()]
        return len(frases)

    def fatores_primos(self, numero):
        fatores = []
        divisor = 2
        while numero > 1:
            while numero % divisor == 0:
                fatores.append(divisor)
                numero //= divisor
            divisor += 1
        return fatores
