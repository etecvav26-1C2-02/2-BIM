# Design System — Engenharia de Software
**ETEC VAV · Turma 1C2 · PTIC**

---

## 1. Identidade Visual

### Conceito
Minimalismo editorial. Menos elementos, mais respiro. Tipografia como elemento visual principal. Cada página deve parecer um artigo de revista técnica de alto nível — limpa, densa em informação e sem ruído visual.

### Paleta de Cores

| Token | Valor HEX | Uso |
|---|---|---|
| `--color-bg` | `#F7F5F0` | Fundo geral (off-white quente) |
| `--color-surface` | `#FFFFFF` | Cards, painéis, tabelas |
| `--color-primary` | `#0F2447` | Azul marinho — textos, header, hero |
| `--color-accent` | `#E85D3A` | Laranja terracota — CTAs, destaques, ícones |
| `--color-muted` | `#6B6B6B` | Textos secundários, legendas |
| `--color-border` | `#DDD9D0` | Bordas, divisores |
| `--color-code-bg` | `#EEF1F7` | Fundo de chips, blocos de código |

```css
:root {
  --color-bg:      #F7F5F0;
  --color-surface: #FFFFFF;
  --color-primary: #0F2447;
  --color-accent:  #E85D3A;
  --color-muted:   #6B6B6B;
  --color-border:  #DDD9D0;
  --color-code-bg: #EEF1F7;
}
```

### Tipografia

| Papel | Fonte | Importar via |
|---|---|---|
| Display / Títulos | `DM Serif Display` | Google Fonts |
| Corpo / UI | `DM Sans` (300, 400, 500, 600) | Google Fonts |

```html
<link rel="preconnect" href="https://fonts.googleapis.com">
<link href="https://fonts.googleapis.com/css2?family=DM+Serif+Display:ital@0;1&family=DM+Sans:opsz,wght@9..40,300;9..40,400;9..40,500;9..40,600&display=swap" rel="stylesheet">
```

```css
:root {
  --font-display: 'DM Serif Display', Georgia, serif;
  --font-body:    'DM Sans', system-ui, sans-serif;
}

h1, h2, h3, h4 { font-family: var(--font-display); font-weight: 400; line-height: 1.2; letter-spacing: -0.02em; }
body            { font-family: var(--font-body); font-size: 1rem; line-height: 1.7; }
```

**Escala tipográfica:**

```css
h1   { font-size: clamp(2.4rem, 5vw, 4rem); }
h2   { font-size: clamp(1.8rem, 3.5vw, 2.8rem); }
h3   { font-size: clamp(1.3rem, 2.5vw, 1.8rem); }
h4   { font-size: 1.15rem; }
.lead { font-size: 1.2rem; color: var(--color-muted); font-weight: 300; }
```

### Espaçamento

```css
:root {
  --space-xs: 0.5rem;   /*  8px */
  --space-sm: 1rem;     /* 16px */
  --space-md: 2rem;     /* 32px */
  --space-lg: 4rem;     /* 64px */
  --space-xl: 8rem;     /* 128px */
}
```

### Bordas e Sombras

```css
:root {
  --radius-sm:   4px;
  --radius-md:   10px;
  --shadow-card: 0 2px 16px rgba(15,36,71,.07);
  --transition:  .2s ease;
}
```

---

## 2. Estrutura de Arquivos

```
/
├── index.html
├── profissao.html
├── curso.htm
├── carreira.html
├── sobre.html
└── assets/
    ├── css/
    │   └── style.css        ← único arquivo CSS externo
    └── img/
        ├── hero-bg.jpg
        ├── profissao-hero.jpg
        └── ...              ← imagens livres de direitos (Unsplash / Pexels)
```

**Sugestões de imagem gratuitas:**
- Hero index: buscar "software engineer coding dark" em [unsplash.com](https://unsplash.com)
- Profissão: "developer laptop coding" ou "team code review"
- Curso: "university campus lecture"
- Carreira: "office technology professional"

---

## 3. Componentes Reutilizáveis

### 3.1 Header (igual em todas as páginas)

```html
<header class="site-header">
  <div class="container">
    <a href="index.html" class="logo">Eng<span>.</span>Software</a>
    <button class="nav-toggle" aria-label="Menu">
      <span></span><span></span><span></span>
    </button>
    <nav class="site-nav">
      <a href="index.html">Início</a>
      <a href="profissao.html">Profissão</a>
      <a href="curso.htm">Curso</a>
      <a href="carreira.html">Carreira</a>
      <a href="sobre.html">Sobre</a>
    </nav>
  </div>
</header>
```

**CSS:**
```css
.site-header {
  background: var(--color-primary);
  position: sticky; top: 0; z-index: 100;
  border-bottom: 2px solid var(--color-accent);
}
.site-header .container {
  display: flex; align-items: center;
  justify-content: space-between; height: 64px;
}
.logo {
  font-family: var(--font-display);
  font-size: 1.25rem; color: #fff;
}
.logo span { color: var(--color-accent); }
.site-nav { display: flex; gap: var(--space-md); }
.site-nav a {
  color: rgba(255,255,255,.7);
  font-size: .875rem; font-weight: 500;
  letter-spacing: .05em; text-transform: uppercase;
  transition: color var(--transition);
  padding-bottom: 2px;
  border-bottom: 1px solid transparent;
}
.site-nav a:hover,
.site-nav a.active { color: #fff; border-color: var(--color-accent); }
```

### 3.2 Footer (igual em todas as páginas)

```html
<footer class="site-footer">
  <div class="container">
    <p>Engenharia de Software &mdash; ETEC VAV · 2026</p>
    <p class="footer-links">
      <a href="index.html">Início</a> ·
      <a href="profissao.html">Profissão</a> ·
      <a href="curso.htm">Curso</a> ·
      <a href="carreira.html">Carreira</a> ·
      <a href="sobre.html">Sobre</a>
    </p>
  </div>
</footer>
```

**CSS:**
```css
.site-footer {
  background: var(--color-primary);
  color: rgba(255,255,255,.5);
  padding-block: var(--space-md);
  font-size: .85rem; text-align: center;
}
.site-footer a { color: rgba(255,255,255,.65); transition: color var(--transition); }
.site-footer a:hover { color: var(--color-accent); }
.footer-links { margin-top: .5rem; }
```

### 3.3 Hero

```html
<section class="hero">
  <div class="container">
    <span class="hero__tag">Profissão</span>
    <h1>Título da Página</h1>
    <p class="lead">Subtítulo descritivo da seção.</p>
    <a href="#conteudo" class="hero__cta">Explorar →</a>
  </div>
</section>
```

**CSS:**
```css
.hero {
  background: var(--color-primary);
  color: #fff;
  padding-block: var(--space-xl);
  position: relative; overflow: hidden;
}
.hero::before {
  content: '';
  position: absolute; inset: 0;
  background: radial-gradient(ellipse 60% 80% at 80% 50%,
    rgba(232,93,58,.18) 0%, transparent 70%);
  pointer-events: none;
}
.hero__tag {
  display: inline-block;
  background: var(--color-accent); color: #fff;
  font-size: .75rem; font-weight: 600;
  letter-spacing: .12em; text-transform: uppercase;
  padding: 4px 12px; border-radius: var(--radius-sm);
  margin-bottom: var(--space-sm);
}
.hero h1  { color: #fff; margin-bottom: var(--space-sm); }
.hero .lead { color: rgba(255,255,255,.7); margin-bottom: var(--space-md); }
.hero__cta {
  display: inline-flex; align-items: center; gap: 8px;
  background: var(--color-accent); color: #fff;
  font-weight: 600; font-size: .9rem;
  padding: .75rem 1.75rem; border-radius: var(--radius-sm);
  transition: var(--transition);
}
.hero__cta:hover { filter: brightness(1.1); transform: translateY(-1px); }
```

### 3.4 Card

```html
<div class="card">
  <div class="card__icon">💻</div>
  <h4>Título do Card</h4>
  <p>Descrição breve do conteúdo do card.</p>
</div>
```

**CSS:**
```css
.card {
  background: var(--color-surface);
  border: 1px solid var(--color-border);
  border-radius: var(--radius-md);
  padding: var(--space-md);
  box-shadow: var(--shadow-card);
  transition: transform var(--transition), box-shadow var(--transition);
}
.card:hover {
  transform: translateY(-3px);
  box-shadow: 0 8px 28px rgba(15,36,71,.12);
}
.card__icon {
  width: 48px; height: 48px;
  background: var(--color-code-bg);
  border-radius: var(--radius-sm);
  display: flex; align-items: center;
  justify-content: center; font-size: 1.4rem;
  margin-bottom: var(--space-sm);
}
.card h4 { margin-bottom: .35rem; }
.card p  { font-size: .925rem; margin: 0; color: var(--color-muted); }
```

### 3.5 Section Header

```html
<div class="section-header">
  <span class="section-label">Subtítulo</span>
  <h2 class="section-title">Título Principal</h2>
  <p class="lead section-intro">Parágrafo introdutório da seção.</p>
</div>
```

**CSS:**
```css
.section-label {
  display: block;
  font-size: .75rem; font-weight: 600;
  letter-spacing: .12em; text-transform: uppercase;
  color: var(--color-accent);
  margin-bottom: var(--space-xs);
}
.section-title  { margin-bottom: .5rem; }
.section-intro  { margin-bottom: var(--space-md); }
```

### 3.6 Tabela

```html
<table class="salary-table">
  <thead>
    <tr><th>Coluna 1</th><th>Coluna 2</th><th>Coluna 3</th></tr>
  </thead>
  <tbody>
    <tr><td>Dado</td><td>Dado</td><td>Dado</td></tr>
  </tbody>
</table>
```

**CSS:**
```css
.salary-table { width: 100%; border-collapse: collapse; font-size: .9rem; }
.salary-table th, .salary-table td {
  padding: .85rem 1.1rem; text-align: left;
  border-bottom: 1px solid var(--color-border);
}
.salary-table th {
  background: var(--color-primary); color: #fff;
  font-weight: 500; font-size: .8rem;
  letter-spacing: .06em; text-transform: uppercase;
}
.salary-table tbody tr:hover { background: var(--color-code-bg); }
```

### 3.7 Timeline (para página Carreira)

```html
<div class="timeline">
  <div class="timeline__item">
    <p class="timeline__year">Júnior (0–2 anos)</p>
    <h4 class="timeline__title">Desenvolvedor Jr.</h4>
    <p class="timeline__text">Descrição do nível.</p>
  </div>
</div>
```

**CSS:**
```css
.timeline { position: relative; padding-left: 2rem; }
.timeline::before {
  content: ''; position: absolute;
  left: 0; top: 8px; bottom: 0;
  width: 2px; background: var(--color-border);
}
.timeline__item { position: relative; padding-bottom: var(--space-md); }
.timeline__item::before {
  content: ''; position: absolute;
  left: -2.375rem; top: 8px;
  width: 10px; height: 10px; border-radius: 50%;
  background: var(--color-accent);
  border: 2px solid var(--color-bg);
  box-shadow: 0 0 0 2px var(--color-accent);
}
.timeline__year {
  font-size: .75rem; font-weight: 600;
  letter-spacing: .1em; text-transform: uppercase;
  color: var(--color-accent); margin-bottom: .2rem;
}
.timeline__title { font-family: var(--font-display); font-size: 1.1rem; margin-bottom: .3rem; }
.timeline__text  { font-size: .9rem; color: var(--color-muted); margin: 0; }
```

### 3.8 Chips / Tags

```html
<div class="chip-group">
  <span class="chip">Python</span>
  <span class="chip">Java</span>
  <span class="chip chip--accent">Alta demanda</span>
</div>
```

**CSS:**
```css
.chip-group { display: flex; flex-wrap: wrap; gap: 8px; margin-block: var(--space-sm); }
.chip {
  background: var(--color-code-bg); color: var(--color-primary);
  font-size: .8rem; font-weight: 500;
  padding: 4px 12px; border-radius: 99px;
  border: 1px solid var(--color-border);
}
.chip--accent {
  background: rgba(232,93,58,.1); color: var(--color-accent);
  border-color: rgba(232,93,58,.2);
}
```

### 3.9 Grid de Estatísticas

```html
<div class="stat-grid">
  <div class="stat">
    <p class="stat__value">R$ 10k</p>
    <p class="stat__label">Salário médio</p>
  </div>
</div>
```

**CSS:**
```css
.stat-grid {
  display: grid;
  grid-template-columns: repeat(auto-fit, minmax(180px, 1fr));
  gap: var(--space-md); margin-block: var(--space-md);
}
.stat {
  background: var(--color-surface);
  border: 1px solid var(--color-border);
  border-radius: var(--radius-md);
  padding: var(--space-md); text-align: center;
}
.stat__value {
  font-family: var(--font-display);
  font-size: 2.2rem; color: var(--color-accent);
  margin: 0; line-height: 1;
}
.stat__label { font-size: .85rem; color: var(--color-muted); margin-top: .4rem; margin-bottom: 0; }
```

### 3.10 Highlight Box

```html
<div class="highlight-box">
  <h3>Destaque importante</h3>
  <p>Texto de destaque com fundo escuro.</p>
</div>
```

**CSS:**
```css
.highlight-box {
  background: var(--color-primary); color: #fff;
  border-radius: var(--radius-md);
  padding: var(--space-md) var(--space-lg);
  margin-block: var(--space-md);
}
.highlight-box h3 { color: #fff; margin-bottom: .5rem; }
.highlight-box p  { color: rgba(255,255,255,.75); margin: 0; }
```

### 3.11 Layout Grids

```css
.container {
  max-width: 1100px;
  margin-inline: auto;
  padding-inline: var(--space-md);
}
.section { padding-block: var(--space-lg); }
.section--alt { background: var(--color-surface); }
.grid-2 { display: grid; grid-template-columns: repeat(auto-fit, minmax(280px, 1fr)); gap: var(--space-md); }
.grid-3 { display: grid; grid-template-columns: repeat(auto-fit, minmax(240px, 1fr)); gap: var(--space-md); }
```

---

## 4. Mobile First — Media Queries

```css
/* Base = mobile (< 640px) — escreva o CSS base aqui */

/* Tablet */
@media (min-width: 640px) {
  .grid-2 { grid-template-columns: repeat(2, 1fr); }
}

/* Desktop */
@media (min-width: 1024px) {
  .grid-3 { grid-template-columns: repeat(3, 1fr); }
}

/* Nav mobile */
@media (max-width: 768px) {
  .site-nav {
    display: none;
    position: absolute; top: 64px; left: 0; right: 0;
    background: var(--color-primary);
    flex-direction: column;
    padding: var(--space-md);
    gap: var(--space-sm);
  }
  .site-nav.open { display: flex; }
  .nav-toggle    { display: flex; }
}
```

**JS mínimo para o menu mobile:**
```html
<script>
  document.querySelector('.nav-toggle').addEventListener('click', () => {
    document.querySelector('.site-nav').classList.toggle('open');
  });
</script>
```

---

## 5. Estrutura HTML Padrão (template base)

Copie esse esqueleto para cada página e preencha o conteúdo:

```html
<!DOCTYPE html>
<html lang="pt-BR">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>TÍTULO DA PÁGINA — Engenharia de Software</title>
  <link rel="preconnect" href="https://fonts.googleapis.com">
  <link href="https://fonts.googleapis.com/css2?family=DM+Serif+Display:ital@0;1&family=DM+Sans:opsz,wght@9..40,300;9..40,400;9..40,500;9..40,600&display=swap" rel="stylesheet">
  <link rel="stylesheet" href="assets/css/style.css">
</head>
<body>

  <!-- HEADER -->
  <header class="site-header">
    <div class="container">
      <a href="index.html" class="logo">Eng<span>.</span>Software</a>
      <button class="nav-toggle" aria-label="Abrir menu">
        <span></span><span></span><span></span>
      </button>
      <nav class="site-nav">
        <a href="index.html">Início</a>
        <a href="profissao.html">Profissão</a>
        <a href="curso.htm">Curso</a>
        <a href="carreira.html">Carreira</a>
        <a href="sobre.html">Sobre</a>
      </nav>
    </div>
  </header>

  <main>
    <!-- HERO -->
    <section class="hero">
      <div class="container">
        <span class="hero__tag">TAG</span>
        <h1>Título Principal</h1>
        <p class="lead">Subtítulo da página.</p>
        <a href="#conteudo" class="hero__cta">Ver mais →</a>
      </div>
    </section>

    <!-- CONTEÚDO PRINCIPAL -->
    <section id="conteudo" class="section">
      <div class="container">
        <!-- conteúdo aqui -->
      </div>
    </section>
  </main>

  <!-- FOOTER -->
  <footer class="site-footer">
    <div class="container">
      <p>Engenharia de Software &mdash; ETEC VAV · 2026</p>
      <p class="footer-links">
        <a href="index.html">Início</a> ·
        <a href="profissao.html">Profissão</a> ·
        <a href="curso.htm">Curso</a> ·
        <a href="carreira.html">Carreira</a> ·
        <a href="sobre.html">Sobre</a>
      </p>
    </div>
  </footer>

  <script>
    document.querySelector('.nav-toggle').addEventListener('click', () => {
      document.querySelector('.site-nav').classList.toggle('open');
    });
    // Marcar link ativo
    document.querySelectorAll('.site-nav a').forEach(link => {
      if (link.href === location.href) link.classList.add('active');
    });
  </script>
</body>
</html>
```

---

## 6. Conteúdo por Página

---

### 6.1 `index.html` — Página Inicial

**Objetivo:** Introduzir o tema, despertar interesse, navegar para as outras páginas.

**Hero:**
- Tag: `Profissão do Futuro`
- H1: `Engenharia de Software`
- Lead: *Os arquitetos do mundo digital — quem são, o que fazem e como entrar na área.*
- CTA: `Explorar a profissão →` (link para `profissao.html`)

**Seção 1 — O que é?** (texto + imagem)
> A Engenharia de Software é a disciplina que aplica princípios de engenharia ao desenvolvimento de sistemas e programas de computador. Vai muito além de programar: envolve planejamento, arquitetura, testes, documentação e gestão do ciclo de vida completo do software.

**Seção 2 — Destaques em números** (`stat-grid` com 4 itens):
| Valor | Rótulo |
|---|---|
| R$ 10.600 | Salário médio/mês |
| +24.000 | Empresas de software no Brasil |
| 4 anos | Duração média da graduação |
| 11º | Brasil no ranking mundial de software |

**Seção 3 — Navegue pelo site** (`grid-3` com 3 cards):
- 💼 **Profissão** — O dia a dia, responsabilidades e habilidades do engenheiro de software.
- 🎓 **Curso** — As melhores universidades públicas e privadas para se formar.
- 📈 **Carreira** — Faixas salariais, empresas e progressão profissional.

---

### 6.2 `profissao.html` — A Profissão

**Objetivo:** Explicar o que é a profissão, o que o profissional faz, habilidades exigidas e área de atuação.

**Hero:**
- Tag: `A Profissão`
- H1: `O que faz um Engenheiro de Software?`
- Lead: *Do levantamento de requisitos à implantação em produção — conheça as responsabilidades dessa carreira.*

**Seção 1 — Definição oficial (texto)**
> O Engenheiro de Software pesquisa, concebe, projeta, desenvolve, testa e implanta sistemas, aplicando conhecimentos de matemática discreta, linguagens de programação e arquitetura de computadores para solucionar problemas complexos de software. (CBO 2122-15 — Ministério do Trabalho)

**Seção 2 — Responsabilidades** (`grid-3`, cards com ícone emoji):
| Ícone | Título | Descrição |
|---|---|---|
| 📋 | Análise de Requisitos | Levantar e documentar as necessidades do cliente e dos usuários do sistema. |
| 🏗️ | Arquitetura de Software | Projetar a estrutura, os módulos e a lógica geral do sistema. |
| 💻 | Desenvolvimento | Escrever código limpo e eficiente nas linguagens adequadas ao projeto. |
| 🧪 | Testes e Qualidade | Planejar e executar testes para garantir que o software funcione corretamente. |
| 📝 | Documentação Técnica | Elaborar guias, manuais e registros técnicos do sistema desenvolvido. |
| 👥 | Gestão de Equipe | Supervisionar times de desenvolvimento e organizar treinamentos. |

**Seção 3 — Habilidades técnicas** (chips):
`Python` `Java` `JavaScript` `C++` `SQL` `Git` `Docker` `AWS` `Scrum` `UML` `Linux` `APIs REST`

**Seção 4 — Áreas de atuação** (lista ou cards menores):
- Desenvolvimento Web (front-end e back-end)
- Aplicativos Móveis (iOS e Android)
- Inteligência Artificial e Machine Learning
- Banco de Dados e Big Data
- Segurança da Informação
- Jogos Digitais (Game Development)
- Sistemas Embarcados
- Computação em Nuvem

**Seção 5 — Highlight box:**
> *"O mercado de software no Brasil movimenta US$ 45,2 bilhões e o país ocupa a 11ª posição no ranking mundial de investimentos na área."*
> Fonte: ABES — Associação Brasileira das Empresas de Software, 2023.

---

### 6.3 `curso.htm` — O Curso

**Objetivo:** Mostrar as principais instituições, duração, grade curricular e como ingressar.

**Hero:**
- Tag: `Formação Acadêmica`
- H1: `Onde Estudar Engenharia de Software`
- Lead: *Conheça as melhores universidades públicas e privadas e o que você vai aprender durante a graduação.*

**Seção 1 — Sobre o curso (texto)**
> O bacharelado em Engenharia de Software tem duração média de **4 anos** (8 semestres). Combina fundamentos de Engenharia e Ciência da Computação para preparar o profissional para criar, testar e manter sistemas de software. Pode ser cursado presencialmente ou na modalidade EaD.

**Seção 2 — Universidades Públicas** (tabela `salary-table`):

| Instituição | Estado | Tipo |
|---|---|---|
| Universidade de Brasília (UnB) | Distrito Federal | Federal — Gratuita |
| Universidade Federal de Goiás (UFG) | Goiás | Federal — Gratuita |
| Universidade Federal de Mato Grosso do Sul (UFMS) | Mato Grosso do Sul | Federal — Gratuita |
| Universidade Estadual Paulista (Unesp) | São Paulo | Estadual — Gratuita |
| Universidade Federal do Ceará (UFC) | Ceará | Federal — Gratuita |
| Universidade Tecnológica Federal do Paraná (UTFPR) | Paraná | Federal — Gratuita |

> A UnB e a UFG oferecem os cursos mais antigos e tradicionais de Engenharia de Software do Brasil, sendo referência nacional.

**Seção 3 — Universidades Privadas de Destaque** (cards `grid-3`):
| Instituição | Estado | Nota |
|---|---|---|
| PUC-Campinas | São Paulo | ⭐ 4 estrelas |
| PUC-PR (PUCPR) | Paraná | Referência regional |
| UNICESUMAR | Paraná | EaD e presencial |
| USP (Eng. da Computação) | São Paulo | Maior universidade do Brasil |
| UFSCar | São Paulo | Forte integração com mercado |
| UNI-FACEF | São Paulo | ⭐ 4 estrelas |

**Seção 4 — Grade curricular** (chips por semestre ou lista organizada):

*Principais disciplinas:*
`Algoritmos e Programação` `Estrutura de Dados` `Banco de Dados` `Engenharia de Requisitos` `Arquitetura de Software` `Padrões de Projeto` `Sistemas Operacionais` `Redes de Computadores` `Segurança de Sistemas` `Gerência de Projetos` `Testes de Software` `Computação em Nuvem`

**Seção 5 — Como ingressar** (highlight-box ou lista):
- **ENEM/SISU** — Universidades federais e estaduais públicas
- **Vestibular próprio** — Cada instituição privada tem seu processo
- **Nota de corte** — Varia por instituição e concorrência
- **Duração:** 4 anos (presencial) / 2–4 anos (EaD)
- **Modalidades:** Presencial · Semipresencial · EaD

---

### 6.4 `carreira.html` — Carreira e Mercado

**Objetivo:** Mostrar faixas salariais, empresas empregadoras, progressão de carreira e perspectivas de mercado.

**Hero:**
- Tag: `Mercado de Trabalho`
- H1: `Carreira em Engenharia de Software`
- Lead: *Salários, empresas que contratam e como crescer na área mais aquecida do mercado de tecnologia.*

**Seção 1 — Faixas salariais** (tabela):

| Nível | Experiência | Salário médio/mês |
|---|---|---|
| Estagiário | 0 – 1 ano | R$ 1.500 – R$ 3.000 |
| Júnior | 0 – 2 anos | R$ 3.000 – R$ 6.000 |
| Pleno | 2 – 5 anos | R$ 6.000 – R$ 12.000 |
| Sênior | 5+ anos | R$ 12.000 – R$ 20.000+ |
| Especialista / Lead | 8+ anos | R$ 20.000 – R$ 32.000+ |

> Fontes: Portal Salário (CAGED), Indeed Brasil, Glassdoor — 2025/2026.

**Stat-grid (4 números):**
| Valor | Rótulo |
|---|---|
| R$ 10.616 | Salário médio geral |
| R$ 32.154 | Teto salarial em SP |
| 4.131+ | Vagas abertas (Glassdoor, mai/2026) |
| 56.312 | Contratações no último ano |

**Seção 2 — Progressão de carreira** (timeline):
- **Estágio (0–1 ano):** Aprender rotinas, contribuir em tarefas menores, trabalhar com supervisão.
- **Júnior (0–2 anos):** Desenvolver funcionalidades simples, corrigir bugs, participar de code reviews.
- **Pleno (2–5 anos):** Responsável por módulos completos, lidera tarefas sem supervisão constante.
- **Sênior (5+ anos):** Arquitetura de sistemas, mentoria de juniores, tomada de decisão técnica.
- **Tech Lead / Arquiteto:** Liderança técnica de times inteiros, definição de padrões e tecnologias.
- **Engenheiro Principal / Staff:** Influência em toda a organização, projetos de alto impacto estratégico.

**Seção 3 — Empresas que contratam** (grid de company-cards):

| Empresa | Tipo | Sede no Brasil |
|---|---|---|
| Mercado Livre | E-commerce / Fintech | SP, Campinas, Salvador |
| Google (Alphabet) | Big Tech | SP, RJ, BH |
| IBM | TI / Consultoria | São Paulo |
| TOTVS | Software BR | São Paulo |
| Dell Technologies | Hardware + Software | SP, RS |
| Microsoft | Big Tech | São Paulo |
| Nubank | Fintech | São Paulo |
| HP Brasil | TI | Barueri – SP |
| Telefônica Vivo | Telecom + TI | São Paulo |
| CI&T | Consultoria TI | Campinas – SP |

**Seção 4 — Áreas com alta demanda** (chips accent):
`Inteligência Artificial` `Cloud Computing` `Segurança Cibernética` `DevOps` `Desenvolvimento Mobile` `Big Data` `Machine Learning` `Computação em Nuvem`

**Seção 5 — Highlight box:**
> *"O Brasil possui mais de 24.000 empresas com foco em software e serviços, e o setor cresce ano a ano impulsionado pela transformação digital em saúde, finanças, educação e varejo."*

---

### 6.5 `sobre.html` — Sobre o Projeto

**Objetivo:** Apresentar os autores, o contexto do trabalho e as referências em ABNT.

**Hero:**
- Tag: `Sobre o Projeto`
- H1: `Quem fez este site`
- Lead: *Trabalho desenvolvido para a disciplina de PTIC — ETEC VAV, 2026.*

**Seção 1 — Autores** (grid-2, cards com foto ou avatar):

> ⚠️ Preencha com os nomes reais da dupla.

```
Autor 1:
  Nome: [SEU NOME]
  Turma: 1C2
  Escola: ETEC VAV
  Função no projeto: [ex.: HTML das páginas index e profissao, CSS geral]

Autor 2:
  Nome: [NOME DO PARCEIRO]
  Turma: 1C2
  Escola: ETEC VAV
  Função no projeto: [ex.: HTML das páginas curso e carreira, responsividade]
```

**Seção 2 — Descrição do trabalho** (texto):
> Este site foi desenvolvido como atividade avaliativa da disciplina de PTIC (Práticas em Tecnologia da Informação e Comunicação) do curso técnico integrado da ETEC VAV, turma 1C2, no ano de 2026. O objetivo foi pesquisar e apresentar a profissão de Engenheiro de Software, abordando sua definição, responsabilidades, formação acadêmica, mercado de trabalho e perspectivas de carreira. O projeto foi construído com HTML5, CSS3 externo e aplicou o conceito de Mobile First para adaptação a diferentes tamanhos de tela.

**Seção 3 — Tecnologias utilizadas** (chips):
`HTML5` `CSS3` `Google Fonts` `Mobile First` `GitHub`

**Seção 4 — Referências (ABNT)**

```
INDEED BRASIL. Qual é o salário de um engenheiro de software no Brasil em 2025? 
Disponível em: https://br.indeed.com/conselho-de-carreira/pagamento-salario/salario-engenheiro-software. 
Acesso em: 18 mai. 2026.

GLASSDOOR. Salário: Engenheiro de Software — Brasil, 2026. 
Disponível em: https://www.glassdoor.com.br/Salários/engenheiro-de-software-salário-SRCH_KO0,22.htm. 
Acesso em: 18 mai. 2026.

PORTAL SALÁRIO. Engenheiro de Software — CBO 2122-15. 
Disponível em: https://www.salario.com.br/profissao/engenheiro-de-software-computacional-basico-cbo-212215/. 
Acesso em: 18 mai. 2026.

QUERO BOLSA. As 10 melhores faculdades de Engenharia de Software do Brasil. 
Disponível em: https://querobolsa.com.br/revista/engenharia-de-software-faculdades. 
Acesso em: 18 mai. 2026.

MEUTUDO. Engenharia de Software: pretensão salarial ideal da área. 
Disponível em: https://meutudo.com.br/blog/quanto-ganha-um-engenheiro-de-software/. 
Acesso em: 18 mai. 2026.

STRIDER. Melhores empresas de TI para trabalhar no Brasil. 
Disponível em: https://www.onstrider.com/pt/blog/empresas-de-ti-no-brasil. 
Acesso em: 18 mai. 2026.

LINKEDIN. LinkedIn Top Companies 2025: as 10 melhores empresas de tecnologia no Brasil. 
Disponível em: https://pt.linkedin.com/pulse/linkedin-top-companies-2025-10-melhores-empresas-de-u8rxc. 
Acesso em: 18 mai. 2026.

MUNDO VESTIBULAR. As melhores faculdades de Engenharia de Software. 
Disponível em: https://www.mundovestibular.com.br/blog/curso-de-engenharia-de-software. 
Acesso em: 18 mai. 2026.

ASSOCIAÇÃO BRASILEIRA DAS EMPRESAS DE SOFTWARE (ABES). Mercado Brasileiro de Software: 
Panorama e Tendências 2023. São Paulo: ABES, 2023.

BRASIL. Ministério do Trabalho e Emprego. Classificação Brasileira de Ocupações: 
CBO 2122-15 — Engenheiro de Software. Brasília: MTE, 2024.
```

---

## 7. Checklist de Entrega

- [ ] `index.html` criado e funcional
- [ ] `profissao.html` criado e funcional
- [ ] `curso.htm` criado e funcional
- [ ] `carreira.html` criado e funcional
- [ ] `sobre.html` com referências ABNT
- [ ] `assets/css/style.css` externo e linkado em todas as páginas
- [ ] Navegação funcionando entre todas as páginas
- [ ] `class="active"` correto em cada página
- [ ] Imagens adicionadas (`assets/img/`)
- [ ] Site testado no celular (Mobile First)
- [ ] Commits frequentes no GitHub (mín. 5–8 commits)
- [ ] Ambos os integrantes com commits registrados
- [ ] Repositório com pastas organizadas
- [ ] Nomes dos autores preenchidos em `sobre.html`

---

*Design System gerado em 18/05/2026 — conteúdo pesquisado em fontes públicas (CAGED, Indeed, Glassdoor, Portal Salário, Quero Bolsa, LinkedIn).*