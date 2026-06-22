document.addEventListener('DOMContentLoaded', () => {
    // seleciona os elementos principais do carrossel (slider)
    const track = document.querySelector('.slider-track');
    const slides = Array.from(document.querySelectorAll('.slider-track .secao-portfolio'));
    const prevBtn = document.querySelector('.prev-btn');
    const nextBtn = document.querySelector('.next-btn');
    const dotsContainer = document.querySelector('.slider-dots');
    
    // se não encontrar o carrossel ou os slides, interrompe o script
    if (!track || slides.length === 0) return;

    let currentIndex = 0; 
    let autoPlayInterval; 
    const autoPlayDelay = 6000; // tempo para trocar automaticamente
    
    dotsContainer.innerHTML = '';
    slides.forEach((_, idx) => {
        const dot = document.createElement('span');
        dot.classList.add('dot');
        if (idx === 0) dot.classList.add('active'); 
        dot.setAttribute('data-slide', idx); 
        dotsContainer.appendChild(dot);
    });

    // pega todos os pontos criados
    const dots = Array.from(dotsContainer.querySelectorAll('.dot'));

    // define o primeiro slide como ativo
    slides[0].classList.add('active');

    // função principal que muda para um slide específico
    function goToSlide(index) {
        // se passar do último volta pro início, se voltar do primeiro vai pro final
        if (index < 0) {
            currentIndex = slides.length - 1;
        } else if (index >= slides.length) {
            currentIndex = 0;
        } else {
            currentIndex = index;
        }

        // move o trilho do carrossel horizontalmente
        track.style.transform = `translateX(-${currentIndex * 100}%)`;

        // atualiza a classe 'active' nos slides 
        slides.forEach((slide, idx) => {
            if (idx === currentIndex) {
                slide.classList.add('active');
            } else {
                slide.classList.remove('active');
            }
        });

        // atualiza a classe 'active' nos pontinhos
        dots.forEach((dot, idx) => {
            if (idx === currentIndex) {
                dot.classList.add('active');
            } else {
                dot.classList.remove('active');
            }
        });
    }

    // clicar no botão "Próximo"
    if (nextBtn) {
        nextBtn.addEventListener('click', () => {
            goToSlide(currentIndex + 1);
            resetAutoPlay(); // Reinicia o tempo automático ao interagir
        });
    }

    // clicar no botão "Anterior"
    if (prevBtn) {
        prevBtn.addEventListener('click', () => {
            goToSlide(currentIndex - 1);
            resetAutoPlay();
        });
    }

    // clicar em algum dos pontinhos
    dots.forEach((dot) => {
        dot.addEventListener('click', (e) => {
            const targetSlide = parseInt(e.target.getAttribute('data-slide'), 10);
            goToSlide(targetSlide);
            resetAutoPlay();
        });
    });

    // navegação usando as setas do teclado
    document.addEventListener('keydown', (e) => {
        if (e.key === 'ArrowRight') { // Seta pra direita
            goToSlide(currentIndex + 1);
            resetAutoPlay();
        } else if (e.key === 'ArrowLeft') { // Seta pra esquerda
            goToSlide(currentIndex - 1);
            resetAutoPlay();
        }
    });

    // detectar arrastar/deslizar o dedo na tela (celulares/tablets)
    let touchStartX = 0;
    let touchEndX = 0;

    // marca a posição inicial do dedo
    track.addEventListener('touchstart', (e) => {
        touchStartX = e.changedTouches[0].screenX;
    }, { passive: true });

    // marca a posição final do dedo ao soltar e processa o movimento
    track.addEventListener('touchend', (e) => {
        touchEndX = e.changedTouches[0].screenX;
        handleSwipe();
    }, { passive: true });

    // verifica para qual lado o usuário arrastou o dedo
    function handleSwipe() {
        const threshold = 50; 
        if (touchStartX - touchEndX > threshold) {
            // arrastou para a esquerda (próximo slide)
            goToSlide(currentIndex + 1);
            resetAutoPlay();
        } else if (touchEndX - touchStartX > threshold) {
            // arrastou para a direita (slide anterior)
            goToSlide(currentIndex - 1);
            resetAutoPlay();
        }
    }

    // inicia a troca automática de slides
    function startAutoPlay() {
        autoPlayInterval = setInterval(() => {
            goToSlide(currentIndex + 1);
        }, autoPlayDelay);
    }

    // para a troca automática
    function stopAutoPlay() {
        clearInterval(autoPlayInterval);
    }

    // reinicia o tempo para não pular slide logo após o usuário clicar
    function resetAutoPlay() {
        stopAutoPlay();
        startAutoPlay();
    }

    // pausa a troca automática se o mouse estiver sobre o carrossel 
    const sliderWrapper = document.querySelector('.slider-wrapper');
    if (sliderWrapper) {
        sliderWrapper.addEventListener('mouseenter', stopAutoPlay);
        sliderWrapper.addEventListener('mouseleave', startAutoPlay);
    }

    // liga a reprodução automática ao iniciar
    startAutoPlay();
});
