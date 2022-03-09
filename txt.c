• Votre programme doit compiler avec l’option : -D BUFFER_SIZE=n
Cette macro définie à l’invocation du compilateur servira à spécifier la taille du
buffer lors de vos appels à read() dans votre fonction get_next_line().
Cette valeur sera modifiée lors de la peer-evaluation et par la Moulinette dans le
but de tester votre rendu.
• Votre programme sera donc compilé de la manière suivante (exemple ci-dessous
avec une taille de buffer de 42) :
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c
• Nous considérons que get_next_line() a un comportement indeterminé si, entre
deux appels, le fichier pointé par le descripteur de fichier a été modifié, alors que
le premier fichier n’a pas été lu en entier.
• Nous considérons aussi que get_next_line() a un comportement indeterminé en
cas de lecture d’un fichier binaire. Cependant, si vous le souhaitez, vous pouvez
rendre ce comportement cohérent