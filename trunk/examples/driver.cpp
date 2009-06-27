
#include <csv_parser/csv_parser.hpp>

/**
 * Driver File
 *
 * This object is used to parse text documents that are delimited by some
 * type of character. Some of the common ones use spaces, tabs, commas and semi-colons.
 *
 * This is a list of common characters encountered by this program
 *
 * This list is from http://asciitable.com/
 *
 * @li DEC is how it would be represented in decimal form (base 10)
 * @li HEX is how it would be represented in hexadecimal format (base 16)
 *
 * @li	DEC	HEX		Character Name
 * @li	0	0x00	null
 * @li	9	0x09	horizontal tab
 * @li	10	0x0A	line feed, new line
 * @li	13	0x0D	carriage return
 * @li	27	0x1B	escape
 * @li	32	0x20	space
 * @li	33	0x21	double quote
 * @li	39	0x27	single quote
 * @li	44	0x2C	comma
 * @li	92	0x5C	backslash
 *
 * @author Israel Ekpo <israel.ekpo@israelekpo.com>
 */

int main(void)
{
	const char * filename = "example_input.csv";
	const char field_terminator = ',';
	const char line_terminator  = '\n';
	const char enclosure_char   = '"';

	csv_parser file_parser;

	file_parser.set_skip_lines(1);

	file_parser.init(filename);
	file_parser.set_enclosed_char(enclosure_char, ENCLOSURE_OPTIONAL);
	file_parser.set_field_term_char(field_terminator);
	file_parser.set_line_term_char(line_terminator);

	unsigned int row_count = 1U;

	while(file_parser.has_more_rows())
	{
		unsigned int i = 0;

		csv_row row = file_parser.get_row();

		for (i = 0; i < row.size(); i++)
		{
			printf("COLUMN %02d : %s\n", i + 1U, row[i].c_str());
		}

		printf("====================================================================\n");
		printf("END OF ROW %02d\n", row_count);
		printf("====================================================================\n");

		row_count++;
	}

	return 0;
}
