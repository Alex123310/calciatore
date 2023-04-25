//Procedura Carica_Record_F()
Calciatore Carica_Record_F ()
{
// caricamento e controllo campi del record
do
{
 printf ("Cognome: ");
 fflush(stdin);
 gets (c.Cognome); 
}
while ( (strlen(c.Nome) == 0) || (strlen(c.Nome) > MAXDIM) );
do
{
 printf ("Nome: ");
 gets (c.Nome); 
}
while ( (strlen(c.Nome) == 0) || (strlen(c.Nome) > MAXDIM) );
 printf ("Maglia: ");
 scanf ("%d", &(c.Maglia));
return (c);
}

