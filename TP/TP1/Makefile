.PHONY: init

init:
	@sh -c 'if [ -e "work" ]; then echo "Erreur : le dossier \"work\" existe déjà"; exit 1; fi'
	cp -r template work
	@sh -c 'cd work; bash ex-1.sh; rm ex-1.sh'
