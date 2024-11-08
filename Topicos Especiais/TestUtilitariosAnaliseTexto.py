import unittest
from variacao05 import UtilitariosAnaliseTexto
from collections import Counter

class TestUtilitariosAnaliseTexto(unittest.TestCase):
    def setUp(self):
        self.util = UtilitariosAnaliseTexto("teste com varias palavras algumas repetidas teste final")

    def test_contar_palavras_unicas(self):
        self.assertEqual(self.util.contar_palavras_unicas(), 7)

    def test_eh_anagrama(self):
        self.assertTrue(self.util.eh_anagrama("amor", "roma"))
        self.assertFalse(self.util.eh_anagrama("teste", "texto"))

    def test_frequencia_caracteres(self):
        self.util.texto = "teste com varias palavras algumas repetidas teste final"
        esperado = Counter(self.util.texto.replace(" ", "").lower())
        self.assertEqual(self.util.frequencia_caracteres(), dict(esperado))

    def test_palavras_unicas_ordenadas(self):
        esperado = sorted(["teste", "com", "varias", "palavras", "algumas", "repetidas", "final"])
        self.assertEqual(self.util.palavras_unicas_ordenadas(), esperado)

    def test_palavra_mais_longa(self):
        self.assertEqual(self.util.palavra_mais_longa(), "repetidas")

    def test_prefixo_comum(self):
        lista_palavras = ["repetir", "repete", "repertório", "repouso"]
        self.assertEqual(self.util.prefixo_comum(lista_palavras), "rep")
        self.assertEqual(self.util.prefixo_comum([]), "")

    def test_contar_frases(self):
        self.util.texto = "Primeira frase. Segunda frase!"
        self.assertEqual(self.util.contar_frases(), 2)

    def test_fatores_primos(self):
        self.assertEqual(self.util.fatores_primos(28), [2, 2, 7])
        self.assertEqual(self.util.fatores_primos(13), [13])
        self.assertEqual(self.util.fatores_primos(1), [])

    def test_casos_especiais(self):
        self.util.texto = ""
        self.assertEqual(self.util.contar_palavras_unicas(), 0)
        self.assertEqual(self.util.frequencia_caracteres(), {})
        self.assertEqual(self.util.palavras_unicas_ordenadas(), [])
        self.assertEqual(self.util.palavra_mais_longa(), "")
        self.assertEqual(self.util.contar_frases(), 0)
        self.assertEqual(self.util.fatores_primos(-28), [])

if __name__ == "__main__":
    unittest.main()