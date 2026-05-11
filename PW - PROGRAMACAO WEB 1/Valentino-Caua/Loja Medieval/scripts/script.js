let moedaAtual = 'ouro';
function toggleMoeda() {
    const precos = document.querySelectorAll('.preco-valor');
    moedaAtual = moedaAtual === 'ouro' ? 'real' : 'ouro';
    
    precos.forEach(preco => {
        if (moedaAtual === 'real') {
            preco.innerText = preco.getAttribute('data-real');
        } else {
            preco.innerText = preco.getAttribute('data-ouro');
        }
    });
}