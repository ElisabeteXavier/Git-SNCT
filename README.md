# Guia Rápido: Criar uma Conta no GitHub e Fazer o Primeiro Commit

![GitHub Logo](https://github.githubassets.com/images/modules/logos_page/GitHub-Mark.png)

Este guia irá mostrar como criar uma conta no GitHub e fazer seu primeiro commit em apenas alguns passos.

## Passo 1: Crie uma Conta no GitHub

👉 **1.1** Acesse o [GitHub](https://github.com).

👉 **1.2** Clique em "Sign up" no canto superior direito.

👉 **1.3** Preencha seus dados, escolha um nome de usuário, e clique em "Sign up for GitHub".

## Passo 2: Verifique seu E-mail

📧 Verifique seu e-mail para ativar sua conta.

## Passo 3: Crie um Repositório

👉 **3.1** Faça login na sua conta.

👉 **3.2** Clique em "+", no canto superior direito e selecione "New repository".

👉 **3.3** Dê um nome ao seu repositório e clique em "Create repository".

## Passo 4: Configure o Git

👉 **4.1** Abra o terminal.

```bash
# Configure seu nome de usuário
git config --global user.name "Seu Nome"
```
~~~bash
# Configure seu e-mail
git config --global user.email "seu-email@example.com"
~~~ 

## Passo 5: Clone o Repositório

👉 **5.1** No GitHub, clique no botão "Code" e copie a URL do repositório.

👉 **5.2** No terminal, navegue até a pasta onde deseja clonar o repositório e execute:

```bash
git clone URL_DO_REPOSITORIO
```
## Passo 6: Faça seu Primeiro Commit

👉 **6.1** Abra o arquivo que deseja adicionar ao repositório.

👉 **6.2** Faça as alterações necessárias.

👉 **6.3** No terminal, vá até a pasta do repositório.

👉 **6.4** Adicione as alterações e faça um commit.

```bash
git add .
```
~~~bash
git commit -m "Adicionei meu primeiro arquivo"
~~~

👉 **6.5** Envie as alterações para o repositório remoto.

```bash
git push
```
## 7 - Bônus para Linux

👉 **7.1** Faça login na sua conta do GitHub em [https://github.com](https://github.com).

👉 **7.2**  No canto superior direito, clique na sua foto de perfil e selecione "Settings" (Configurações).

👉 **7.3** Na barra lateral esquerda, role para baixo e clique em "Developer settings" (Configurações de desenvolvedor).

👉 **7.4** Na seção "Personal access tokens" (Tokens pessoais de acesso), clique em "Generate token" (Gerar token).

👉 **7.5** Você será direcionado para uma página onde poderá criar seu token pessoal. Siga os passos a seguir:

   > **Token description** (Descrição do token): Dê um nome descritivo ao seu token para que possa reconhecê-lo mais tarde.

   > **Expiration** (Validade): Escolha por quanto tempo deseja que o token seja válido. Você pode escolher entre algumas opções ou definir uma data de validade personalizada.

   > **Scopes** (Escopos): Selecione os escopos necessários para as operações que deseja realizar com o token. Certifique-se de conceder apenas os privilégios necessários para evitar expor informações sensíveis.

👉 **7.6**  Após preencher os detalhes, clique em "Generate token" (Gerar token).

👉 **7.7** O token será gerado e exibido na tela. **IMPORTANTE:** Copie o token e guarde-o em um local seguro. O token só será exibido uma vez, e você não poderá recuperá-lo novamente.

👉 **7.8** Use o token pessoal de acesso em suas aplicações, scripts ou ferramentas para autenticar-se no GitHub e realizar as ações permitidas pelos escopos concedidos.



Agora, você criou sua conta no GitHub, configurou o Git e fez seu primeiro commit. Parabéns!

Lembre-se de substituir "Seu Nome" e "seu-email@example.com" pelas suas informações reais. Divirta-se colaborando e compartilhando projetos no GitHub! 😄🚀
