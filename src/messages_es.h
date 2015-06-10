#define MSG_TLS_CIPHER_FAILED "SSL/TLS: Invalid TLSCipherSuite specified '%s'"
#define MSG_TIMEOUT "Timeout"
#define MSG_CAPABILITIES "No se han podido alternar capacidades"
#define MSG_CLIENT_CLOSED_CNX "El cliente cerr� la conexi�n"
#define MSG_CLIENT_READ_ERR "Error de lectura del cliente"
#define MSG_CANT_OPEN_CNX "No se puede abrir conexi�n"
#define MSG_CANT_CREATE_DATA_SOCKET "No se puede crear el socket de datos"
#define MSG_DEBUG_CLIENT_IS "La direcci�n del cliente es"
#define MSG_SYNTAX_ERROR_IP "Error de sintaxis en la direcci�n IP"
#define MSG_PORT_SUCCESSFUL "Comando PORT con �xito"
#define MSG_ONLY_IPV4V6 "S�lo IPv4 e IPv6 est�n soportados (1,2)"
#define MSG_ONLY_IPV4 "S�lo IPv4 est� soportado (1)"
#define MSG_TIMEOUT_PARSER "Timeout - intenta escribir m�s r�pido la pr�xima vez"
#define MSG_LINE_TOO_LONG "L�nea demasiado larga"
#define MSG_LOG_OVERFLOW "El cliente intent� desbordar el buffer de la l�nea de comandos"
#define MSG_GOODBYE "Adi�s. Has transmitido %llu y descargado %llu kbytes."
#define MSG_DEBUG_COMMAND "Comando"
#define MSG_IS_YOUR_CURRENT_LOCATION "es tu localizaci�n actual"
#define MSG_NOT_LOGGED_IN "No est�s dentro del sistema"
#define MSG_AUTH_UNIMPLEMENTED "Extensiones de seguridad no implementadas"
#define MSG_NO_FILE_NAME "No existe nombre de archivo"
#define MSG_NO_DIRECTORY_NAME "No existe nombre de directorio"
#define MSG_NO_RESTART_POINT "No existe punto de reinicio"
#define MSG_ABOR_SUCCESS "Mientras ves esto ABOR deber�a haber tenido �xito"
#define MSG_MISSING_ARG "Falta argumento"
#define MSG_GARBAGE_FOUND "Encontrada basura despu�s del valor"
#define MSG_VALUE_TOO_LARGE "Valor demasiado grande"
#define MSG_IDLE_TIME "Tiempo inactivo puesto a %lu segundos"
#define MSG_SITE_HELP "Los siguientes comandos SITE son reconocidos"
#define MSG_BAD_CHMOD "Permisos no v�lidos"
#define MSG_UNKNOWN_EXTENSION "es una extensi�n desconocida"
#define MSG_XDBG_OK "Comando XDBG con �xito, el nivel de depuraci�n es ahora %d"
#define MSG_UNKNOWN_COMMAND "Comando desconocido"
#define MSG_TIMEOUT_NOOP "Timeout (sin realizar operaciones durante %lu segundos)"
#define MSG_TIMEOUT_DATA "Timeout (sin nuevos datos durante %lu segundos)"
#define MSG_SLEEPING "Zzz..."
#define MSG_ALREADY_LOGGED "Ya est�s dentro del sistema"
#define MSG_ANY_PASSWORD "Cualquier clave funcionar�"
#define MSG_ANONYMOUS_LOGGED "Usuario An�nimo dentro del sistema"
#define MSG_ANONYMOUS_LOGGED_VIRTUAL "Usuario An�nimo dentro del FTP virtual"
#define MSG_USER_OK "Usuario %s OK. Clave requerida"
#define MSG_CANT_DO_TWICE "No podemos hacer esto en la sesi�n actual"
#define MSG_UNABLE_SECURE_ANON "No se pudo establecer FTP an�nimo seguro"
#define MSG_BANDWIDTH_RESTRICTED "Tu utilizaci�n de ancho de banda est� restringida"
#define MSG_NO_PASSWORD_NEEDED "No necesito ninguna clave, querido an�nimo cobarde"
#define MSG_NOTRUST "Lo siento, pero no te creo"
#define MSG_WHOAREYOU "Por favor, dime qui�n eres"
#define MSG_AUTH_FAILED "Autentificaci�n fallida, lo siento"
#define MSG_AUTH_TOOMANY "Demasiados fallos de autentificaci�n"
#define MSG_NO_HOMEDIR "Directorio Home no disponible - abortando"
#define MSG_NO_HOMEDIR2 "%s no existe o es inalcanzable"
#define MSG_START_SLASH "Comenzando en /"
#define MSG_USER_GROUP_ACCESS "Usuario %s tiene acceso de grupo a"
#define MSG_FXP_SUPPORT "Este servidor soporta transferencias FXP"
#define MSG_RATIO "Debes respetar una proporci�n %u:%u (UL/DL)"
#define MSG_CHROOT_FAILED "Imposible establecer una jaula segura chroot()"
#define MSG_CURRENT_DIR_IS "OK. El directorio actual es %s"
#define MSG_CURRENT_RESTRICTED_DIR_IS "OK. El directorio restringido actual es %s"
#define MSG_IS_NOW_LOGGED_IN "%s est� ahora dentro del sistema"
#define MSG_CANT_CHANGE_DIR "No puedo cambiar al directorio %s"
#define MSG_PATH_TOO_LONG "Ruta demasiado larga"
#define MSG_CANT_PASV "No puedo abrir una conexi�n pasiva con ese comando obsoleto"
#define MSG_CANT_PASSIVE "Imposible abrir una conexi�n pasiva"
#define MSG_PORTS_BUSY "Todos los puertos TCP reservados est�n ocupados"
#define MSG_GETSOCKNAME_DATA "Imposible identificar el socket local de datos"
#define MSG_GETPEERNAME "Imposible identificar el socket local"
#define MSG_INVALID_IP "Lo siento, direcci�n dada inv�lida"
#define MSG_NO_EPSV "Por favor, utiliza un cliente compatible IPv6 con soporte EPSV"
#define MSG_BAD_PORT "Lo siento, pero no me conectar� a puertos < 1024"
#define MSG_NO_FXP "No abrir� una conexi�n a %s (s�lo a %s)"
#define MSG_FXP "Transferencia FXP : desde %s hacia %s"
#define MSG_NO_DATA_CONN "No existe conexi�n de datos"
#define MSG_ACCEPT_FAILED "La conexi�n no se pudo aceptar"
#define MSG_ACCEPT_SUCCESS "Conexi�n de datos aceptada"
#define MSG_CNX_PORT_FAILED "No se pudo abrir conexi�n de datos con el puerto %d"
#define MSG_CNX_PORT "Conectando al puerto %d"
#define MSG_ANON_CANT_MKD "Lo siento, los usuarios an�nimos no pueden crear directorios"
#define MSG_ANON_CANT_RMD "Lo siento, los usuarios an�nimos no pueden borrar directorios"
#define MSG_ANON_CANT_RENAME "Los usuarios an�nimos no pueden mover/renombrar archivos"
#define MSG_ANON_CANT_CHANGE_PERMS "Los usuarios an�nimos no pueden cambiar permisos"
#define MSG_GLOB_NO_MEMORY "Sin memoria durante globbing de %s"
#define MSG_PROBABLY_DENIED "(Esto probablemente significa \"Permiso denegado\")"
#define MSG_GLOB_READ_ERROR "Error de lectura durante %s"
#define MSG_GLOB_NO_MATCH "No corresponde %s en %s"
#define MSG_CHMOD_FAILED "No se pudieron cambiar los permisos en %s"
#define MSG_CHMOD_SUCCESS "Permisos cambiados en %s"
#define MSG_CHMOD_TOTAL_FAILURE "Lo siento, pero no pude cambiar ning�n permiso"
#define MSG_ANON_CANT_DELETE "Los usuarios an�nimos no pueden borrar archivos"
#define MSG_ANON_CANT_OVERWRITE "Los usuarios an�nimos no pueden sobreescribir archivos existentes"
#define MSG_DELE_FAILED "No se pudo borrar %s"
#define MSG_DELE_SUCCESS "Borrado %s%s%s%s"
#define MSG_DELE_TOTAL_FAILURE "Archivo no borrado"
#define MSG_LOAD_TOO_HIGH \
    "La carga era %3.2f cuando conectaste. No permitimos descargas\n" \
    "de usuarios an�nimos cuando la carga es tan alta. Las transmisiones se\n" \
    "permiten siempre."
#define MSG_OPEN_FAILURE "No se puede abrir %s"
#define MSG_OPEN_FAILURE2 "No se puede abrir ese archivo"
#define MSG_STAT_FAILURE "No se encuentra el tama�o del archivo"
#define MSG_STAT_FAILURE2 "No se puede comprobar la existencia del archivo"
#define MSG_REST_TOO_LARGE_FOR_FILE "El desplazamiento de reinicio %lld es demasiado grande para el tama�o de archivo %lld."
#define MSG_REST_RESET "Desplazamiento de reinicio puesto a 0"
#define MSG_NOT_REGULAR_FILE "S�lo puedo recuperar archivos comunes"
#define MSG_NOT_MODERATED \
    "Este archivo ha sido transmitido por un usuario an�nimo. Todav�a no ha\n" \
    "sido aprobado por los administradores del sitio para poder ser descargado."
#define MSG_RATIO_DENIAL \
    "Lo siento, pero la proporci�n transmisi�n/descarga es %u:%u .\n" \
    "Actualmente has transmitido %llu Kb y descargado %llu Kb.\n" \
    "Por favor, transmite algunas cosas y trata de seguir descargando m�s tarde."
#define MSG_NO_MORE_TO_DOWNLOAD "No queda nada por descargar"
#define MSG_WINNER "El ordenador es tu amigo. Conf�a en el ordenador"
#define MSG_KBYTES_LEFT "%.1f kbytes quedan por descargar"
#define MSG_ABORTED "Transferencia abortada"
#define MSG_DATA_WRITE_FAILED "Error al escribir en la conexi�n de datos"
#define MSG_DATA_READ_FAILED "Error al leer de la conexi�n de datos"
#define MSG_MMAP_FAILED "Imposible mapear el archivo en memoria"
#define MSG_WRITE_FAILED "Error al escribir el archivo"
#define MSG_TRANSFER_RATE_M "%.3f segundos (medidos aqu�), %.2f Mbytes por segundo"
#define MSG_TRANSFER_RATE_K "%.3f segundos (medidos aqu�), %.2f Kbytes por segundo"
#define MSG_TRANSFER_RATE_B "%.3f segundos (medidos aqu�), %.2f bytes por segundo"
#define MSG_SPACE_FREE_M "%.1f Mbytes de espacio libre en el disco"
#define MSG_SPACE_FREE_K "%f Kbytes de espacio libre en el disco"
#define MSG_DOWNLOADED "descargado"
#define MSG_REST_NOT_NUMERIC "REST necesita un par�metro num�rico"
#define MSG_REST_ASCII_STRICT "Marca de respuesta debe ser 0 en modo ASCII"
#define MSG_REST_ASCII_WORKAROUND "Reanudando en %lld. Pero estamos en modo ASCII"
#define MSG_REST_SUCCESS "Reanudando en %lld"
#define MSG_SANITY_DIRECTORY_FAILURE "Nombre de directorio prohibido"
#define MSG_SANITY_FILE_FAILURE "Nombre de archivo prohibido: %s"
#define MSG_MKD_FAILURE "No puedo crear el directorio"
#define MSG_MKD_SUCCESS "Directorio creado con �xito"
#define MSG_RMD_FAILURE "No puedo borrar el directorio"
#define MSG_RMD_SUCCESS "Directorio borrado con �xito"
#define MSG_TIMESTAMP_FAILURE "No puedo conseguir una marca de tiempo"
#define MSG_MODE_ERROR "S�lo los modos ASCII y binary est�n soportados"
#define MSG_CREATE_FAILURE "Imposible crear archivo"
#define MSG_ABRT_ONLY "ABRT es el �nico comando legal mientras se transmite"
#define MSG_UPLOAD_PARTIAL "parcialmente transmitido"
#define MSG_REMOVED "borrado"
#define MSG_UPLOADED "transmitido"
#define MSG_GMTIME_FAILURE "No puedo conseguir la hora local"
#define MSG_TYPE_8BIT_FAILURE "S�lo  los bytes de 8-bit est�n soportados, no estamos hace 10 a�os"
#define MSG_TYPE_UNKNOWN "Desconocido TYPE"
#define MSG_TYPE_SUCCESS "TYPE es ahora"
#define MSG_STRU_FAILURE "S�lo F(ile) est� soportado"
#define MSG_MODE_FAILURE "Por favor, use el modo S(tream)"
#define MSG_RENAME_ABORT "Abortando operaci�n anterior de renombrado"
#define MSG_RENAME_RNFR_SUCCESS "RNFR aceptado - archivo existe, preparado para destino"
#define MSG_FILE_DOESNT_EXIST "Lo siento, pero ese archivo no existe"
#define MSG_RENAME_ALREADY_THERE "RENAME fall� - el archivo de destino ya existe"
#define MSG_RENAME_NORNFR "Se necesita RNFR antes que RNTO"
#define MSG_RENAME_FAILURE "Fallo al renombrar/mover"
#define MSG_RENAME_SUCCESS "Archivo renombrado o movido con �xito"
#define MSG_NO_SUPERSERVER "Por favor, ejecuta pure-ftpd dentro de un super-servidor (como tcpserver)"
#define MSG_NO_FTP_ACCOUNT "Imposible encontrar la cuenta 'ftp'"
#define MSG_CONF_ERR "Error de configuraci�n"
#define MSG_NO_VIRTUAL_FILE "Falta el archivo de nombres de usuarios virtuales"
#define MSG_ILLEGAL_THROTTLING "Valor ilegal para flujo"
#define MSG_ILLEGAL_TRUSTED_GID "El GID de confianza chroot es ilegal"
#define MSG_ILLEGAL_USER_LIMIT "L�mite de usuario ilegal"
#define MSG_ILLEGAL_FACILITY "Nombre de facilidad desconocido"
#define MSG_ILLEGAL_CONFIG_FILE_LDAP "Archivo de configuraci�n LDAP inv�lido"
#define MSG_ILLEGAL_LOAD_LIMIT "L�mite de carga ilegal"
#define MSG_ILLEGAL_PORTS_RANGE "Rango de puertos ilegal"
#define MSG_ILLEGAL_LS_LIMITS "L�mites 'ls' ilegales"
#define MSG_ILLEGAL_FORCE_PASSIVE "IP forzada para conexiones pasivas ilegal"
#define MSG_ILLEGAL_RATIO "Proporci�n de transmisi�n/recepci�n ilegal"
#define MSG_ILLEGAL_UID_LIMIT "L�mite uid ilegal"
#define MSG_ILLEGAL_OPTION "Opci�n de ejecuci�n desconocida"
#define MSG_LDAP_MISSING_BASE "No se encuentra LDAPBaseDN en el archivo de configuraci�n LDAP"
#define MSG_LDAP_WRONG_PARMS "Par�metros LDAP incorrectos"
#define MSG_NEW_CONNECTION "Nueva conexi�n desde %s"
#define MSG_WELCOME_TO "Bienvenido a"
#define MSG_MAX_USERS "%lu usuarios (el m�ximo) est�n el sistema, lo siento"
#define MSG_NB_USERS "Eres el usuario n�mero %u de %u permitidos"
#define MSG_WELCOME_TIME "La hora local es ahora %02d:%02d. Puerto del servidor: %u."
#define MSG_ANONYMOUS_FTP_ONLY "S�lo se permite FTP an�nimo"
#define MSG_RATIOS_EVERYONE "LAS PROPORCIONES EST�N ESTABLECIDAS PARA TODOS :"
#define MSG_RATIOS_ANONYMOUS "USUARIOS AN�NIMOS EST�N SUJETOS A UNA PROPORCI�N UL/DL :"
#define MSG_RATIOS_RULE "para descargar %u Mb, es obligatorio subir %u Mb de archivos."
#define MSG_INFO_IDLE_M "Ser�s desconectado despu�s de %lu minutos de inactividad."
#define MSG_INFO_IDLE_S "Ser�s desconectado despu�s de %lu segundos de inactividad."
#define MSG_CANT_READ_FILE "Lo siento, somos incapaces de leer [%s]"
#define MSG_LS_TRUNCATED "Salida truncada a %u ocurrencias"
#define MSG_LS_SUCCESS "%u ocurrencias en total"
#define MSG_LOGOUT "Fin de sesi�n."
#define MSG_AUTH_FAILED_LOG "Autentificaci�n fallida para el usuario [%s]"
#define MSG_ILLEGAL_UMASK "Umask inv�lida"
#define MSG_STANDALONE_FAILED "No se ha podido ejecutar un servidor independiente"
#define MSG_NO_ANONYMOUS_LOGIN "Este es un sistema privado - No se permiten usuarios an�nimos"
#define MSG_ANONYMOUS_ANY_PASSWORD "Cualquier clave funcionar�"
#define MSG_MAX_USERS_IP "Demasiadas conexiones (%lu) desde esta IP"
#define MSG_ACTIVE_DISABLED "Modo activo est� desactivado"
#define MSG_TRANSFER_SUCCESSFUL "Archivo transmitido con �xito"
#define MSG_NO_DISK_SPACE "Disco lleno - por favor, sube archivos m�s tarde"
#define MSG_OUT_OF_MEMORY "Sin memoria"
#define MSG_ILLEGAL_TRUSTED_IP "Direcci�n IP en quien confiar no v�lida"
#define MSG_SQL_WRONG_PARMS "Par�metros SQL incorrectos"
#define MSG_NO_ASCII_RESUME "Reanudar en modo ASCII es inseguro. Por favor, borra antes el fichero"
#define MSG_UNKNOWN_ALTLOG "Formato de registro desconocido"
#define MSG_ACCOUNT_DISABLED "No se puede conectar como [%s] : cuenta deshabilitada"
#define MSG_ILLEGAL_CONFIG_FILE_SQL "Fichero de configuraci�n SQL inv�lido"
#define MSG_SQL_MISSING_SERVER "No se encuentra el servidor del archivo de configuraci�n SQL"
#define MSG_SQL_DOWN "El servidor SQL parece que no funciona"
#define MSG_ILLEGAL_QUOTA "Cuota inv�lida"
#define MSG_QUOTA_FILES "%llu archivos utilizados (%d%%) - autorizados: %llu archivos"
#define MSG_QUOTA_SIZE "%llu Kbytes utilizados (%d%%) - autorizados: %llu Kb"
#define MSG_QUOTA_EXCEEDED "Cuota excedida : [%s] no ser� guardado"
#define MSG_AUTH_UNKNOWN "M�todo de autentificaci�n desconocido"
#define MSG_PDB_BROKEN "No se puede leer el fichero indexado puredb (o formato antiguo detectado) - Prueba a ejecutar pure-pw mkdb"
#define MSG_ALIASES_ALIAS "%s es un alias para %s."
#define MSG_ALIASES_UNKNOWN "Alias desconocido %s."
#define MSG_ALIASES_BROKEN_FILE "Fichero de alias da�ado"
#define MSG_ALIASES_LIST "Los siguientes alias est�n disponibles :"
#define MSG_PERUSER_MAX "No puedo aceptar m�s de %lu conexiones del mismo usuario"
#define MSG_IPV6_OK "Las conexiones IPv6 tambi�n son bienvenidas en este servidor"
#define MSG_TLS_INFO "SSL/TLS: Activado %s con %s, %d bits de cifrado"
#define MSG_TLS_WEAK "SSL/TLS: Cifrado demasiado d�bil"
#define MSG_TLS_NEEDED "Lo siento. No se aceptan sesiones sin cifrar en este servidor.\n" \
    "Por favor, vuelva a conectar utilizando mecanismos de seguridad SSL/TLS."
#define MSG_ILLEGAL_CHARSET "Illegal charset"
#define MSG_TLS_NO_CTX "SSL/TLS: Context not found. Exiting."
#define MSG_PROT_OK "Data protection level set to \"%s\""
#define MSG_PROT_PRIVATE_NEEDED "Data connection cannot be opened with this PROT setting."
#define MSG_PROT_UNKNOWN_LEVEL "Protection level %s not understood. Fallback to \"%s\""
#define MSG_PROT_BEFORE_PBSZ "PROT must be preceded by a successful PBSZ command"
#define MSG_WARN_LDAP_USERPASS_EMPTY "LDAP returned no userPassword attribute, check LDAP access rights."
#define MSG_LDAP_INVALID_AUTH_METHOD "Invalid LDAPAuthMethod in the configuration file. Should be 'bind' or 'password'."
