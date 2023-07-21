# siad-limpeza-preprocessamento

## Requisitos
'''
>>> import nltk
>>> nltk.download('punkt')
>>> nltk.download('stopwords')
'''

## Explicação

### Remoção de dados duplicados:
A biblioteca pandas é importada como pd.
Um DataFrame chamado 'dados' é suposto existir.
O método drop_duplicates() é chamado no DataFrame para remover as linhas duplicadas.
O DataFrame resultante sem duplicatas é atribuído à variável 'dados_sem_duplicatas'.

### Tratamento de valores ausentes:
A biblioteca pandas é importada como pd.
Um DataFrame chamado 'dados' é suposto existir.
O método dropna() é chamado no DataFrame para remover as linhas que contêm valores ausentes.
O DataFrame resultante sem valores ausentes é atribuído à variável 'dados_sem_ausentes'.
Alternativamente, o método fillna(valor) pode ser usado para preencher os valores ausentes com um valor específico.

### Tratamento de outliers:
A biblioteca numpy é importada como np.
Uma lista ou array chamado 'dados' é suposto existir.
A média e o desvio padrão dos dados são calculados usando np.mean() e np.std(), respectivamente.
Limites inferior e superior são calculados multiplicando o desvio padrão por 3 e subtraindo/adicionando à média.
Os outliers são filtrados selecionando apenas os valores dentro dos limites estabelecidos.
Os dados filtrados são armazenados na variável 'dados_filtrados'.

### Padronização e normalização:
A biblioteca sklearn.preprocessing é importada.
Um array ou DataFrame chamado 'dados' é suposto existir.
Para padronização, um objeto StandardScaler() é criado e aplicado aos dados usando fit_transform().
Para normalização, um objeto MinMaxScaler() é criado e aplicado aos dados usando fit_transform().
Os dados padronizados e normalizados são armazenados nas variáveis 'dados_padronizados' e 'dados_normalizados', respectivamente.

### Codificação de variáveis categóricas:
A biblioteca pandas é importada como pd.
Um DataFrame chamado 'dados' é suposto existir, com uma coluna categórica chamada 'categoria'.
O método get_dummies() do pandas é usado para criar colunas separadas para cada categoria, convertendo-as em variáveis binárias (one-hot encoding).
O DataFrame resultante com as colunas codificadas é armazenado na variável 'dados_codificados'.

### Redução de dimensionalidade:
A biblioteca sklearn.decomposition é importada.
Um array ou DataFrame chamado 'dados' é suposto existir.
Um objeto PCA(n_components=2) é criado, especificando o número de componentes principais desejado (2, neste caso).
O método fit_transform() é aplicado aos dados usando o objeto PCA para realizar a redução de dimensionalidade.
Os dados reduzidos são armazenados na variável 'dados_reduzidos'.

### Normalização de texto:
A biblioteca re (regex), nltk (Natural Language Toolkit) e a classe PorterStemmer da biblioteca nltk.stem são importadas.
Um texto chamado 'texto' é suposto existir.
A expressão regular [^a-zA-Z] é usada em re.sub() para remover todos os caracteres não alfabéticos (pontuação e caracteres especiais).
O método lower() é chamado em 'texto_normalizado' para converter todo o texto em minúsculas.
A função nltk.word_tokenize() é usada para dividir o texto normalizado em palavras individuais.
As stopwords em português são carregadas usando stopwords.words('portuguese') e armazenadas na variável 'stopwords'.
As palavras que não estão na lista de stopwords são filtradas usando uma compreensão de lista.
A classe PorterStemmer é inicializada como 'stemmer' e usada para aplicar stemming (redução de palavras à raiz) às palavras sem stopwords.
As palavras stemmizadas são armazenadas na variável 'palavras_stemmed'.
O texto final é reconstruído usando ' '.join(palavras_stemmed) para unir as palavras processadas com um espaço entre elas.
