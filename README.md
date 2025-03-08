<section lang="en">
  <h2>English</h2>
  <h3>Introduction to libasm</h3>
  <p><code>libasm</code> is a library written in 64-bit NASM assembly for x86 CPUs. It serves as a practical introduction to assembly language, allowing users to understand how basic functions are implemented at a low level. By reproducing functions from the standard C library, it provides an opportunity to explore system calls and register management.</p>

  <h3>Implemented Functions</h3>
  <p>Here are the functions in <code>libasm</code>, their standard equivalents, and the corresponding man pages:</p>
  <ul>
    <li><strong>ft_strlen</strong>: Reproduces <code>strlen</code> (man 3 strlen) - Calculates the length of a string.</li>
    <li><strong>ft_strcpy</strong>: Reproduces <code>strcpy</code> (man 3 strcpy) - Copies a source string to a destination.</li>
    <li><strong>ft_strcmp</strong>: Reproduces <code>strcmp</code> (man 3 strcmp) - Compares two strings.</li>
    <li><strong>ft_strdup</strong>: Reproduces <code>strdup</code> (man 3 strdup) - Duplicates a string.</li>
    <li><strong>ft_write</strong>: Reproduces <code>write</code> (man 2 write) - Writes to a file descriptor.</li>
    <li><strong>ft_read</strong>: Reproduces <code>read</code> (man 2 read) - Reads from a file descriptor.</li>
  </ul>

  <h3>Using the Makefile</h3>
  <p>The Makefile simplifies the compilation and management of <code>libasm</code>. Here are the commands:</p>
  <ol>
    <li><strong>Compile</strong>: <code>make</code> - Generates <code>libasm.a</code>.</li>
    <li><strong>Clean objects</strong>: <code>make clean</code> - Deletes <code>.o</code> files.</li>
    <li><strong>Clean all</strong>: <code>make fclean</code> - Deletes objects and the library.</li>
    <li><strong>Recompile</strong>: <code>make re</code> - Cleans and rebuilds.</li>
    <li><strong>Test</strong>: <code>make test</code> - Compiles and runs the test.</li>
  </ol>
  <p>To use <code>libasm</code> in a project:</p>
  <pre><code>gcc -o program program.c -L. -lasm</code></pre>
</section>

<section lang="fr">
  <h2>French</h2>
  <h3>Introduction à libasm</h3>
  <p><code>libasm</code> est une bibliothèque écrite en assembleur NASM 64 bits pour les CPU x86. Elle sert d’introduction pratique à l’assembleur, permettant de comprendre comment des fonctions de base sont implémentées à un niveau bas. En reproduisant des fonctions de la bibliothèque standard C, elle offre une opportunité d’explorer les appels système et la gestion des registres.</p>

  <h3>Fonctions implémentées</h3>
  <p>Voici les fonctions de <code>libasm</code>, leurs équivalents standard et les pages du man correspondantes :</p>
  <ul>
    <li><strong>ft_strlen</strong> : Reproduit <code>strlen</code> (man 3 strlen) - Calcule la longueur d’une chaîne.</li>
    <li><strong>ft_strcpy</strong> : Reproduit <code>strcpy</code> (man 3 strcpy) - Copie une chaîne source dans une destination.</li>
    <li><strong>ft_strcmp</strong> : Reproduit <code>strcmp</code> (man 3 strcmp) - Compare deux chaînes.</li>
    <li><strong>ft_strdup</strong> : Reproduit <code>strdup</code> (man 3 strdup) - Duplique une chaîne.</li>
    <li><strong>ft_write</strong> : Reproduit <code>write</code> (man 2 write) - Écrit sur un descripteur de fichier.</li>
    <li><strong>ft_read</strong> : Reproduit <code>read</code> (man 2 read) - Lit depuis un descripteur de fichier.</li>
  </ul>

  <h3>Utilisation du Makefile</h3>
  <p>Le Makefile simplifie la compilation et la gestion de <code>libasm</code>. Voici les commandes :</p>
  <ol>
    <li><strong>Compiler</strong> : <code>make</code> - Génère <code>libasm.a</code>.</li>
    <li><strong>Nettoyer les objets</strong> : <code>make clean</code> - Supprime les fichiers <code>.o</code>.</li>
    <li><strong>Nettoyer tout</strong> : <code>make fclean</code> - Supprime objets et bibliothèque.</li>
    <li><strong>Recompiler</strong> : <code>make re</code> - Nettoie et reconstruit.</li>
    <li><strong>Tester</strong> : <code>make test</code> - Compile et lance le test.</li>
  </ol>
  <p>Pour utiliser <code>libasm</code> dans un projet :</p>
  <pre><code>gcc -o programme programme.c -L. -lasm</code></pre>
</section>
