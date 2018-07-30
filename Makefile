PROJECTS= 	libft	ft_printf	get_next_line

all: $(PROJECTS);

$(PROJECTS):
	@$(MAKE) -C $@

clean fclean re:
	@for file in $(PROJECTS) ; do $(MAKE) -C $$file $@ ; done

.PHONY: clean fclean re all $(PROJECTS)
