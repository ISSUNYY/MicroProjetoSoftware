#include <iostream>
#include <vector>
#include <string>

// Simula a classe que faz a leitura dos dados ruidosos da calha
class CLeitorDados {
public:
    std::vector<double> lerDados(const std::string& arquivo) {
        std::cout << "Lendo arquivo de dados: " << arquivo << "...\n";
        // Simulando dados ruidosos
        return {1.2, 1.9, 1.1, 2.8, 1.5, 3.4, 2.1, 4.0, 3.2, 4.8};
    }
};

// Aplica a média móvel pra tirar o ruído
class CMediaMovel {
public:
    std::vector<double> aplicarFiltro(const std::vector<double>& dados, int janela = 3) {
        std::cout << "Aplicando Media Movel com janela " << janela << "...\n";
        std::vector<double> dadosSuavizados;
        // Lógica simplificada de media movel para o esqueleto
        for (size_t i = 0; i < dados.size(); ++i) {
            dadosSuavizados.push_back(dados[i] * 0.9); // mock
        }
        return dadosSuavizados;
    }
};

// Faz a interpolação polinomial (3 grau)
class CInterpolador {
public:
    std::vector<double> calcularPolinomio(const std::vector<double>& dadosSuavizados) {
        std::cout << "Calculando interpolacao polinomial de 3 grau...\n";
        // mock do cálculo
        return dadosSuavizados;
    }
};

// Analisa onde estão as janelas de geração (óleo/gás) com base no gradiente
class CTocAnalyzer {
public:
    void identificarJanelas(const std::vector<double>& dadosInterpolados) {
        std::cout << "Identificando janelas de geracao termica de TOC...\n";
        std::cout << "-> Janela de oleo encontrada entre as profundidades X e Y.\n";
        std::cout << "-> Janela de gas encontrada na profundidade Z.\n";
    }
};

// Classe principal que orquestra tudo
class CAplicacao {
private:
    CLeitorDados leitor;
    CMediaMovel filtro;
    CInterpolador interpolador;
    CTocAnalyzer analisador;

public:
    void executar() {
        std::cout << "=== Inciando Analise de TOC ===\n\n";
        auto dadosRuidosos = leitor.lerDados("dados_calha_poco.csv");
        auto dadosSuavizados = filtro.aplicarFiltro(dadosRuidosos);
        auto dadosInterpolados = interpolador.calcularPolinomio(dadosSuavizados);
        analisador.identificarJanelas(dadosInterpolados);
        std::cout << "\n=== Analise Finalizada ===\n";
    }
};

int main() {
    CAplicacao app;
    app.executar();
    return 0;
}
