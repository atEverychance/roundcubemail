<?php

/*
 +-----------------------------------------------------------------------+
 | localization/<lang>/labels.inc                                        |
 |                                                                       |
 | Localization file of the Roundcube Webmail client                     |
 | Copyright (C) 2005-2013, The Roundcube Dev Team                       |
 |                                                                       |
 | Licensed under the GNU General Public License version 3 or            |
 | any later version with exceptions for skins & plugins.                |
 | See the README file for a full license statement.                     |
 |                                                                       |
 +-----------------------------------------------------------------------+

 For translation see https://www.transifex.com/projects/p/roundcube-webmail/resource/labels/
*/

$labels = array();

// login page
$labels['welcome']   = 'Bine aţi venit la $product';
$labels['username']  = 'Utilizator';
$labels['password']  = 'Parolă';
$labels['server']    = 'Server';
$labels['login']     = 'Autentificare';

// taskbar
$labels['logout']   = 'Deconectare';
$labels['mail']     = 'E-Mail';
$labels['settings'] = 'Setări personale';
$labels['addressbook'] = 'Agendă';

// mailbox names
$labels['inbox']  = 'Primite';
$labels['drafts'] = 'Ciorne';
$labels['sent']   = 'Trimise';
$labels['trash']  = 'Gunoi';
$labels['junk']   = 'Spam';
$labels['show_real_foldernames'] = 'Show real names for special folders';

// message listing
$labels['subject'] = 'Subiect';
$labels['from']    = 'Expeditor';
$labels['sender']  = 'Expeditor';
$labels['to']      = 'Destinatar';
$labels['cc']      = 'Copie (CC)';
$labels['bcc']     = 'Copie oarbă (BCC)';
$labels['replyto'] = 'Răspunde la';
$labels['followupto'] = 'Followup La';
$labels['date']    = 'Data';
$labels['size']    = 'Mărime';
$labels['priority'] = 'Prioritate';
$labels['organization'] = 'Organizaţie';
$labels['readstatus'] = 'Citit/Necitit';
$labels['listoptions'] = 'Listează opţiunile...';

$labels['mailboxlist'] = 'Dosare';
$labels['messagesfromto'] = 'Mesaje de la $from până la $to din $count';
$labels['threadsfromto'] = 'Grupuri de la $from până la $to din $count';
$labels['messagenrof'] = 'Mesajul $nr din $count';
$labels['fromtoshort'] = '$from - $to din $count';

$labels['copy']     = 'Copiază';
$labels['move']     = 'Mută';
$labels['moveto']   = 'Mută in...';
$labels['download'] = 'Descarcă';
$labels['open']     = 'Deschide';
$labels['showattachment'] = 'Arată';
$labels['showanyway'] = 'Arată oricum';

$labels['filename'] = 'Nume fişier';
$labels['filesize'] = 'Mărime fişier';

$labels['addtoaddressbook'] = 'Adaugă în agendă';

// weekdays short
$labels['sun'] = 'Dum';
$labels['mon'] = 'Lun';
$labels['tue'] = 'Mar';
$labels['wed'] = 'Mie';
$labels['thu'] = 'Joi';
$labels['fri'] = 'Vin';
$labels['sat'] = 'Sâm';

// weekdays long
$labels['sunday']    = 'Duminică';
$labels['monday']    = 'Luni';
$labels['tuesday']   = 'Marţi';
$labels['wednesday'] = 'Miercuri';
$labels['thursday']  = 'Joi';
$labels['friday']    = 'Vineri';
$labels['saturday']  = 'Sâmbătă';

// months short
$labels['jan']	= 'Ian';
$labels['feb']	= 'Feb';
$labels['mar']	= 'Mar';
$labels['apr']	= 'Apr';
$labels['may']	= 'Mai';
$labels['jun']	= 'Iun';
$labels['jul'] 	= 'Iul';
$labels['aug']	= 'Aug';
$labels['sep']	= 'Sep';
$labels['oct']	= 'Oct';
$labels['nov']	= 'Noi';
$labels['dec']	= 'Dec';

// months long
$labels['longjan']	= 'Ianuarie';
$labels['longfeb']	= 'Februarie';
$labels['longmar']	= 'Martie';
$labels['longapr']	= 'Aprilie';
$labels['longmay']	= 'Mai';
$labels['longjun']	= 'Iunie';
$labels['longjul']	= 'Iulie';
$labels['longaug']	= 'August';
$labels['longsep']	= 'Septembrie';
$labels['longoct']	= 'Octombrie';
$labels['longnov']	= 'Noiembrie';
$labels['longdec']	= 'Decembrie';

$labels['today'] = 'Astăzi';

// toolbar buttons
$labels['refresh']          = 'Actualizează';
$labels['checkmail']        = 'Verifică mesaje noi';
$labels['compose']          = 'Scrie un mesaj';
$labels['writenewmessage']  = 'Scrie mesaj nou';
$labels['reply']            = 'Răspunde';
$labels['replytomessage']   = 'Răspunde expeditorului';
$labels['replytoallmessage'] = 'Răspunde la toţi';
$labels['replyall']         = 'Răspunde la toţi';
$labels['replylist']        = 'Răspunde listei';
$labels['forward']          = 'Înaintează';
$labels['forwardinline']    = 'Înaintează ca citat';
$labels['forwardattachment'] = 'Înaintează ca ataşament';
$labels['forwardmessage']   = 'Trimite mesajul mai departe';
$labels['deletemessage']    = 'Șterge mesajul';
$labels['movemessagetotrash'] = 'Mută mesajul la gunoi';
$labels['printmessage']     = 'Listează mesajul';
$labels['previousmessage']  = 'Afişează mesajul anterior';
$labels['firstmessage']     = 'Afişează primul mesaj';
$labels['nextmessage']      = 'Afişează următorul mesaj';
$labels['lastmessage']      = 'Afişează ultimul mesaj';
$labels['backtolist']       = 'Înapoi la mesaje';
$labels['viewsource']       = 'Afişează sursa';
$labels['mark']             = 'Marchează';
$labels['markmessages']     = 'Marchează mesajele';
$labels['markread']         = 'Ca citit';
$labels['markunread']       = 'Ca necitit';
$labels['markflagged']      = 'Ca marcat';
$labels['markunflagged']    = 'Ca nemarcat';
$labels['moreactions']      = 'Mai multe acțiuni...';
$labels['more']             = 'Mai multe';
$labels['back']             = 'Înapoi';
$labels['options']          = 'Opţiuni';

$labels['select'] = 'Selectează';
$labels['all'] = 'Toate';
$labels['none'] = 'Niciunul';
$labels['currpage'] = 'Pagina curentă';
$labels['unread'] = 'Necitite';
$labels['flagged'] = 'Marcat';
$labels['unanswered'] = 'Fără răspuns';
$labels['withattachment'] = 'Cu atașament';
$labels['deleted'] = 'Şterse';
$labels['undeleted'] = 'Nu a fost șters';
$labels['invert'] = 'Inversează';
$labels['filter'] = 'Filtru';
$labels['list'] = 'Listă';
$labels['threads'] = 'Grupare după subiect';
$labels['expand-all'] = 'Extinde toate';
$labels['expand-unread'] = 'Extinde necitite';
$labels['collapse-all'] = 'Compactează toate';
$labels['threaded'] = 'Grupate';

$labels['autoexpand_threads'] = 'Extinde mesajele grupate';
$labels['do_expand'] = 'toate grupările';
$labels['expand_only_unread'] = 'doar pe cele cu mesaje necitite';
$labels['fromto'] = 'Expeditor/Destinatar';
$labels['flag'] = 'Marcaj';
$labels['attachment'] = 'Ataşament';
$labels['nonesort'] = 'Fără sortare';
$labels['sentdate'] = 'Data trimiterii';
$labels['arrival'] = 'Data primirii';
$labels['asc'] = 'ascendent';
$labels['desc'] = 'descendent';
$labels['listcolumns'] = 'Arată coloane';
$labels['listsorting'] = 'Sortează după';
$labels['listorder'] = 'Ordinea de sortare';
$labels['listmode'] = 'Mod de vizualizare';

$labels['folderactions'] = 'Acțiuni dosar...';
$labels['compact'] = 'Compactează';
$labels['empty'] = 'Goleşte';
$labels['importmessages'] = 'Import messages';

$labels['quota'] = 'Spaţiu folosit';
$labels['unknown']  = 'necunoscut';
$labels['unlimited']  = 'nelimitat';

$labels['quicksearch']  = 'Căutare rapidă';
$labels['resetsearch']  = 'Anulează căutarea';
$labels['searchmod']  = 'Parametrii de căutare';
$labels['msgtext']  = 'Tot mesajul';
$labels['body']  = 'Corp';
$labels['type'] = 'Type';

$labels['openinextwin'] = 'Deschide în fereastră nouă';
$labels['emlsave'] = 'Salvează în format .eml';
$labels['changeformattext'] = 'Afișează în format text';
$labels['changeformathtml'] = 'Afișează în format HTML';

// message compose
$labels['editasnew']      = 'Editează ca nou';
$labels['send']           = 'Trimite';
$labels['sendmessage']    = 'Trimite mesaj';
$labels['savemessage']    = 'Salvează ciornă';
$labels['addattachment']  = 'Ataşează fişier';
$labels['charset']        = 'Set de caractere';
$labels['editortype']     = 'Tip de editor';
$labels['returnreceipt']  = 'Returnează confirmare de primire';
$labels['dsn']            = 'Notificare despre starea trimiterii';
$labels['mailreplyintro'] = 'În $date, $sender a scris:';
$labels['originalmessage'] = 'Mesaj original';

$labels['editidents']    = 'Editează identităţi';
$labels['spellcheck']    = 'Ortografie';
$labels['checkspelling'] = 'Verifică ortografie';
$labels['resumeediting'] = 'Reia editarea';
$labels['revertto']      = 'Revino la';

$labels['attach'] = 'Ataşează';
$labels['attachments'] = 'Ataşamente';
$labels['upload'] = 'Încarcă';
$labels['uploadprogress'] = '$percent ($current din $total)';
$labels['close']  = 'Închide';
$labels['messageoptions']  = 'Opţiuni mesaj...';

$labels['low']     = 'Mică';
$labels['lowest']  = 'Cea mai mică';
$labels['normal']  = 'Normală';
$labels['high']    = 'Mare';
$labels['highest'] = 'Cea mai mare';

$labels['nosubject']  = '(fără subiect)';
$labels['showimages'] = 'Afişează imagini';
$labels['alwaysshow'] = 'Afişează întotdeauna imaginile de la $sender';
$labels['isdraft']    = 'Acest mesaj este o ciornă.';
$labels['andnmore']   = '$nr mai multe...';
$labels['togglemoreheaders'] = 'Arată mai mult din antet';
$labels['togglefullheaders'] = 'Arată mai puțin din antet';

$labels['htmltoggle'] = 'HTML';
$labels['plaintoggle'] = 'Text simplu';
$labels['savesentmessagein'] = 'Salvează mesajele trimise în';
$labels['dontsave'] = 'Nu salva';
$labels['maxuploadsize'] = 'Mărimea maxim admisă a fişierului este $size';

$labels['addcc'] = 'Adaugă CC';
$labels['addbcc'] = 'Adaugă BCC';
$labels['addreplyto'] = 'Adaugă Raspunde-La';
$labels['addfollowupto'] = 'Adaugă Followup-La';

// mdn
$labels['mdnrequest'] = 'Expeditorul acestui mesaj a solicitat să fie notificat la cititrea mesajului. Doriţi să notificaţi expeditorul?';
$labels['receiptread'] = 'Returnează confirmare (citit)';
$labels['yourmessage'] = 'Aceasta este o confirmare de primire a mesajului dumneavoastră.';
$labels['receiptnote'] = 'Notă: Această confirmare doar vă informează că mesajul a fost afişat pe calculatorul destinatarului. Nu există nici o garanţie că destinatarul a citit sau a inţeles conţinutul mesajului.';

// address boook
$labels['name']         = 'Numele Contact';
$labels['firstname']    = 'Nume';
$labels['surname']      = 'Prenume';
$labels['middlename']   = 'Iniţiala tatălui';
$labels['nameprefix']   = 'Prefix';
$labels['namesuffix']   = 'Sufix';
$labels['nickname']     = 'Poreclă';
$labels['jobtitle']     = 'Funcția';
$labels['department']   = 'Departament';
$labels['gender']       = 'Sex';
$labels['maidenname']   = 'Nume de fată';
$labels['email']        = 'E-Mail';
$labels['phone']        = 'Telefon';
$labels['address']      = 'Adresă';
$labels['street']       = 'Strada';
$labels['locality']     = 'Oraș';
$labels['zipcode']      = 'Cod poştal';
$labels['region']       = 'Stat/Judeţ';
$labels['country']      = 'Țara';
$labels['birthday']     = 'Ziua de naştere:';
$labels['anniversary']  = 'Aniversare';
$labels['website']      = 'Pagină web';
$labels['instantmessenger'] = 'IM (Mesaj Instant)';
$labels['notes'] = 'Notițe';
$labels['male']   = 'masculin';
$labels['female'] = 'feminin';
$labels['manager'] = 'Manager';
$labels['assistant'] = 'Asistent';
$labels['spouse'] = 'Soț/soție';
$labels['allfields'] = 'Toate câmpurile';
$labels['search'] = 'Căutare';
$labels['advsearch'] = 'Căutare avansată';
$labels['advanced'] = 'Avansat';
$labels['other'] = 'Altele';

$labels['typehome']   = 'Acasă';
$labels['typework']   = 'Serviciu';
$labels['typeother']  = 'Altele';
$labels['typemobile']  = 'Mobil';
$labels['typemain']  = 'Principal';
$labels['typehomefax']  = 'Fax acasă';
$labels['typeworkfax']  = 'Fax serviciu';
$labels['typecar']  = 'Mașină';
$labels['typepager']  = 'Pager';
$labels['typevideo']  = 'Video';
$labels['typeassistant']  = 'Asistent';
$labels['typehomepage']  = 'Pagină de pornire';
$labels['typeblog'] = 'Blog';
$labels['typeprofile'] = 'Profil';

$labels['addfield'] = 'Adaugă câmp...';
$labels['addcontact'] = 'Adaugă contact nou';
$labels['editcontact'] = 'Modifică contact';
$labels['contacts'] = 'Contacte';
$labels['contactproperties'] = 'Proprietăţile contactului...';
$labels['personalinfo'] = 'Informații personale';

$labels['edit']   = 'Editează';
$labels['cancel'] = 'Renunţă';
$labels['save']   = 'Salvează';
$labels['delete'] = 'Şterge';
$labels['rename'] = 'Redenumeşte';
$labels['addphoto'] = 'Adaugă';
$labels['replacephoto'] = 'Înlocuiește';
$labels['uploadphoto'] = 'Încarcă imagine';

$labels['newcontact']     = 'Creează contact nou';
$labels['deletecontact']  = 'Şterge contactul selectat';
$labels['composeto']      = 'Compune e-mail pentru';
$labels['contactsfromto'] = 'Contacte de la $from până la $to din $count';
$labels['print']          = 'Listează';
$labels['export']         = 'Exportă';
$labels['exportall']      = 'Exportă tot';
$labels['exportsel']      = 'Exportă partea selectată';
$labels['exportvcards']   = 'Exportă contactele în format vCard';
$labels['newcontactgroup'] = 'Creează un nou grup de contacte';
$labels['grouprename']    = 'Redenumește grupul';
$labels['groupdelete']    = 'Șterge grupul';
$labels['groupremoveselected'] = 'Șterge contactele selectate din grup';

$labels['previouspage']   = 'Pagina anterioară';
$labels['firstpage']      = 'Prima pagină';
$labels['nextpage']       = 'Pagina următoare';
$labels['lastpage']       = 'Ultima pagină';

$labels['group'] = 'Grup';
$labels['groups'] = 'Grupuri';
$labels['listgroup'] = 'List group members';
$labels['personaladrbook'] = 'Adrese personale';

$labels['searchsave'] = 'Salvează căutarea';
$labels['searchdelete'] = 'Şterge căutarea';

$labels['import'] = 'Importă';
$labels['importcontacts'] = 'Importă contacte';
$labels['importfromfile'] = 'Importă din fişier:';
$labels['importtarget'] = 'Adaugă contactele noi în agenda:';
$labels['importreplace'] = 'Înlocuieşte întreaga agendă';
$labels['importdesc'] = 'Puteți încărca contacte dintr-o agendă existentă.<br/>Momentan este suportat importul în formatul <a href="http://en.wikipedia.org/wiki/VCard">vCard</a> sau în formatul CSV (comma-separated).';
$labels['done'] = 'Finalizat';

// settings
$labels['settingsfor'] = 'Setări pentru';
$labels['about'] = 'Despre';
$labels['preferences'] = 'Preferinţe';
$labels['userpreferences'] = 'Preferinţe utilizator';
$labels['editpreferences'] = 'Modifică preferinţe utilizator';

$labels['identities'] = 'Identităţi';
$labels['manageidentities'] = 'Administrează identităţi pentru acest cont';
$labels['newidentity'] = 'Identitate nouă';

$labels['newitem'] = 'Obiect nou';
$labels['edititem'] = 'Editează obiect';

$labels['preferhtml'] = 'Format HTML';
$labels['defaultcharset'] = 'Set implicit de caractere';
$labels['htmlmessage'] = 'Mesaj HTML';
$labels['messagepart'] = 'Parte';
$labels['digitalsig'] = 'Semnătură digitală';
$labels['dateformat'] = 'Format dată';
$labels['timeformat'] = 'Format oră';
$labels['prettydate'] = 'Dată formatată';
$labels['setdefault']  = 'Setează implicit';
$labels['autodetect']  = 'Automat';
$labels['language']  = 'Limba';
$labels['timezone']  = 'Fus orar';
$labels['pagesize']  = 'Rânduri pe pagină';
$labels['signature'] = 'Semnătură';
$labels['dstactive']  = 'Reglare ora de vară';
$labels['showinextwin'] = 'Deschide mesajul în fereastră nouă';
$labels['composeextwin'] = 'Compune mesajul în fereastră nouă';
$labels['htmleditor'] = 'Scrie mesaje HTML';
$labels['htmlonreply'] = 'la răspunsul doar către un mesaj HTML';
$labels['htmlonreplyandforward'] = 'la trimitere mai departe sau la răspuns la mesaj HTML';
$labels['htmlsignature'] = 'Semnatură HTML';
$labels['showemail'] = 'Arată adresa email alături de nume afișat';
$labels['previewpane'] = 'Previzualizare mail';
$labels['skin'] = 'Temă interfaţă';
$labels['logoutclear'] = 'Goleşte Coşul de Gunoi la deconectare';
$labels['logoutcompact'] = 'Compactează dosarul Primite la deconectare';
$labels['uisettings'] = 'Interfaţă utilizator';
$labels['serversettings'] = 'Configuraţii server';
$labels['mailboxview'] = 'Afişare căsuţă poştală';
$labels['mdnrequests'] = 'Notificări expeditor';
$labels['askuser'] = 'întreabă-mă';
$labels['autosend'] = 'trimite automat';
$labels['autosendknown'] = 'trimite confirmarea de primire către contactele mele, în rest întreabă-mă';
$labels['autosendknownignore'] = 'trimite confirmarea de primire către contactele mele, în rest ignoră';
$labels['ignore'] = 'ignoră';
$labels['readwhendeleted'] = 'Marchează mesajul ca citit la ştergere';
$labels['flagfordeletion'] = 'Marchează mesajul pentru ştergere în loc de a-l şterge direct';
$labels['skipdeleted'] = 'Nu arăta mesajele şterse';
$labels['deletealways'] = 'Dacă mutarea mesajelor în Coş eşuează, șterge-le';
$labels['deletejunk'] = 'Șterge direct mesajele în Junk';
$labels['showremoteimages'] = 'Arată imaginile care nu fac parte din e-mail';
$labels['fromknownsenders'] = 'de la expeditori cunoscuţi';
$labels['always'] = 'întotdeauna';
$labels['showinlineimages'] = 'Arată imaginile ataşate sub mesaj';
$labels['autosavedraft']  = 'Salvează ciorna automat';
$labels['everynminutes']  = 'la fiecare $n minut(e)';
$labels['refreshinterval']  = 'Actualizare (verificare mesaje noi, etc.)';
$labels['never']  = 'niciodată';
$labels['immediately']  = 'imediat';
$labels['messagesdisplaying'] = 'Afişarea mesajelor';
$labels['messagescomposition'] = 'Compunerea mesajelor';
$labels['mimeparamfolding'] = 'Nume ataşamente';
$labels['2231folding'] = 'RFC 2231 (Thunderbird)';
$labels['miscfolding'] = 'RFC 2047/2231 (MS Outlook)';
$labels['2047folding'] = 'RFC 2047 (Altele)';
$labels['force7bit'] = 'Foloseşte encodarea MIME pentru caracterele cu 8 biţi';
$labels['advancedoptions'] = 'Opţiuni avansate';
$labels['focusonnewmessage'] = 'Focalizare pe fereastra browser-ului la mesaje noi';
$labels['checkallfolders'] = 'Verifică toate dosarele pentru mesaje noi';
$labels['displaynext'] = 'După ştergerea sau mutarea unui mesaj afişează-l pe următorul din listă';
$labels['defaultfont'] = 'Font-ul implicit al mesajului HTML';
$labels['mainoptions'] = 'Opţiuni principale';
$labels['browseroptions'] = 'Opțiuni browser';
$labels['section'] = 'Secţiune';
$labels['maintenance'] = 'Mentenanţă';
$labels['newmessage'] = 'Mesaj nou';
$labels['signatureoptions'] = 'Opţiuni semnătură';
$labels['whenreplying'] = 'Când răspundeţi';
$labels['replyempty'] = 'nu cita mesajul original';
$labels['replytopposting'] = 'începeţi mesajul nou deasupra originalului';
$labels['replybottomposting'] = 'începeţi mesajul nou dedesubtul originalului';
$labels['replyremovesignature'] = 'Când răspundeţi, se şterge semnătura originală din mesaj';
$labels['autoaddsignature'] = 'Adăugarea automată a semnăturii';
$labels['newmessageonly'] = 'numai la mesajele noi';
$labels['replyandforwardonly'] = 'numai la răspunsuri si cele trimise mai departe';
$labels['insertsignature'] = 'Introduce o semnătură';
$labels['previewpanemarkread']  = 'Marchează mesajele previzualizate ca citite';
$labels['afternseconds']  = 'după $n secunde';
$labels['reqmdn'] = 'Cere întotdeauna o confirmare de primire';
$labels['reqdsn'] = 'Cere întotdeauna o notificare a stării de trimitere';
$labels['replysamefolder'] = 'Pune răspunsurile în folder-ul mesajului la care se răspunde';
$labels['defaultabook'] = 'Agenda implicită';
$labels['autocompletesingle'] = 'Sari peste adresele e-mail alternative la autocompletare';
$labels['listnamedisplay'] = 'Listează contactele ca';
$labels['spellcheckbeforesend'] = 'Verifică ortografia înainte de a trimite un mesaj';
$labels['spellcheckoptions'] = 'Opţiuni verificare ortografie';
$labels['spellcheckignoresyms'] = 'Ignoră cuvintele cu simboluri';
$labels['spellcheckignorenums'] = 'Ignoră cuvintele cu numere';
$labels['spellcheckignorecaps'] = 'Ignoră cuvintele din litere mari';
$labels['addtodict'] = 'Adaugă la dicţionar';
$labels['mailtoprotohandler'] = 'Îregistrează handler protocol pentru mailto: link-uri';
$labels['standardwindows'] = 'Handle popups as standard windows';
$labels['forwardmode'] = 'Trimitere mai departe mesaj';
$labels['inline'] = 'într-e linii';
$labels['asattachment'] = 'ca atașament';

$labels['folder']  = 'Dosar';
$labels['folders']  = 'Dosare';
$labels['foldername']  = 'Nume dosar';
$labels['subscribed']  = 'Înscris';
$labels['messagecount'] = 'Mesaje';
$labels['create']  = 'Creează';
$labels['createfolder']  = 'Creează dosar nou';
$labels['managefolders']  = 'Administrează dosare';
$labels['specialfolders'] = 'Dosare speciale';
$labels['properties'] = 'Proprietăți';
$labels['folderproperties'] = 'Proprietăţile folder-ului';
$labels['parentfolder'] = 'Dosar părinte';
$labels['location'] = 'Locație';
$labels['info'] = 'Informații';
$labels['getfoldersize'] = 'Click pentru dimensiunea dosarului';
$labels['changesubscription'] = 'Click pentru a modifica abonarea';
$labels['foldertype'] = 'Tip dosar';
$labels['personalfolder']  = 'Dosar privat';
$labels['otherfolder']  = 'Dosarul altui utilizator';
$labels['sharedfolder']  = 'Dosar public';

$labels['sortby'] = 'Sortează după';
$labels['sortasc']  = 'Sortează ascendent';
$labels['sortdesc'] = 'Sortează descendent';
$labels['undo'] = 'Anulaţi/Revocați';

$labels['installedplugins'] = 'Instalare module';
$labels['plugin'] = 'Plugin';
$labels['version'] = 'Versiune';
$labels['source'] = 'Sursă';
$labels['license'] = 'Licență';
$labels['support'] = 'Cere asistenţă';

// units
$labels['B'] = 'O';
$labels['KB'] = 'KO';
$labels['MB'] = 'MO';
$labels['GB'] = 'GO';

// character sets
$labels['unicode'] = 'Unicode';
$labels['english'] = 'Englezesc';
$labels['westerneuropean'] = 'Europa de Vest';
$labels['easterneuropean'] = 'Europa de Est';
$labels['southeasterneuropean'] = 'Europa de Sud-Est';
$labels['baltic'] = 'Baltic';
$labels['cyrillic'] = 'Chirilic';
$labels['arabic'] = 'Arab';
$labels['greek'] = 'Grecesc';
$labels['hebrew'] = 'Evreiesc';
$labels['turkish'] = 'Turcesc';
$labels['nordic'] = 'Ţările Nordice';
$labels['thai'] = 'Tailandez';
$labels['celtic'] = 'Celtic';
$labels['vietnamese'] = 'Vietnamez';
$labels['japanese'] = 'Japonez';
$labels['korean'] = 'Coreean';
$labels['chinese'] = 'Chinezesc';

?>
