# 1 "c:\\users\\hboyina\\desktop\\desktop_08102017_created\\912_pt_08102017\\scripts\\new folde\\08162017\\912_devint_tc1\\\\combined_912_DevInt_TC1.c"
# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"






















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 512 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 515 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 539 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 573 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 596 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 620 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 699 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 760 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 775 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 799 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 811 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 819 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 825 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 926 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 933 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 955 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1031 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1060 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


# 1072 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\users\\hboyina\\desktop\\desktop_08102017_created\\912_pt_08102017\\scripts\\new folde\\08162017\\912_devint_tc1\\\\combined_912_DevInt_TC1.c" 2

# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\users\\hboyina\\desktop\\desktop_08102017_created\\912_pt_08102017\\scripts\\new folde\\08162017\\912_devint_tc1\\\\combined_912_DevInt_TC1.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 769 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"


# 782 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"



























# 820 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 888 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

 
 
 






# 9 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/web_api.h" 2

















 







 














  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2


 
 


# 3 "c:\\users\\hboyina\\desktop\\desktop_08102017_created\\912_pt_08102017\\scripts\\new folde\\08162017\\912_devint_tc1\\\\combined_912_DevInt_TC1.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\users\\hboyina\\desktop\\desktop_08102017_created\\912_pt_08102017\\scripts\\new folde\\08162017\\912_devint_tc1\\\\combined_912_DevInt_TC1.c" 2

# 1 "Action.c" 1
Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_set_user("hboyina@accela.com", 
		lr_decrypt("59a462a5921fe9a422c1041dc28b"), 
		"outlook.office365.com:443");

	web_url("aa-pt6245.dev.accela.com:5443", 
		"URL=https://aa-pt6245.dev.accela.com:5443/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("hostSignon.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?successUrl=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/ssoAdapter/loginAction.do?successURL=https%3A%2F%2Faa-pt6245.dev.accela.com%3A5443%2Fjetspeed%2Findex.jsp&SignOnModule=", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_think_time(6);

	web_url("ac360.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?successUrl=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t3.inf", 
		"LAST");

	web_url("host-signon.css", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/css/host-signon.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?successUrl=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t4.inf", 
		"LAST");

	web_url("spacer.gif", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/images/spacer.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?successUrl=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t5.inf", 
		"LAST");

	web_url("I18N.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?successUrl=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t6.inf", 
		"LAST");

	web_url("memoryLeakPatch.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/memoryLeakPatch.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?successUrl=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t7.inf", 
		"LAST");

	web_url("jsMessageResoruce.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?successUrl=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t8.inf", 
		"LAST");

	web_url("checkTextAreaLength.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/checkTextAreaLength.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?successUrl=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t9.inf", 
		"LAST");

	web_url("Util.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/widget/Util.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?successUrl=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t10.inf", 
		"LAST");

	lr_think_time(6);

 
	web_reg_save_param_regexp(
		"ParamName=requestToken",
		"RegExp=name=\"requestToken\"\\ value=\"(.*?)\">\\\r\\\n\\\t\\\t<input\\ type",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=requestLanguageToken",
		"RegExp=name=\"requestLanguageToken\"\\ value=\"(.*?)\"\\ id",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

	web_url("hostSignon.do_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?successUrl=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t11.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("login.css", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/includes/login.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t12.inf", 
		"LAST");

	web_url("accela_logo_v2.jpg", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/images/accela_logo_v2.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t13.inf", 
		"LAST");

	web_url("dojo.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/dojo.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t14.inf", 
		"LAST");

	web_url("login-bar.gif", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/images/login-bar.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t15.inf", 
		"LAST");

	web_url("sso.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/javascript/sso.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t16.inf", 
		"LAST");

	web_url("json.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/json.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t17.inf", 
		"LAST");

	web_url("AdapterRegistry.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/AdapterRegistry.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t18.inf", 
		"LAST");

	web_submit_data("getconfigs.do",
		"Action=https://aa-pt6245.dev.accela.com:5443/security/getconfigs.do",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true",
		"Snapshot=t19.inf",
		"Mode=HTTP",
		"ITEMDATA",
		"Name=action", "Value=signon", "ENDITEM",
		"Name=successUrl", "Value=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", "ENDITEM",
		"Name=cookieUserName", "Value=", "ENDITEM",
		"Name=cookieAgencyName", "Value=", "ENDITEM",
		"Name=requestToken", "Value={requestToken}", "ENDITEM",
		"Name=requestLanguageToken", "Value={requestLanguageToken}", "ENDITEM",
		"Name=password1", "Value=", "ENDITEM",
		"Name=servProvCode", "Value=", "ENDITEM",
		"Name=username", "Value=", "ENDITEM",
		"Name=password", "Value=", "ENDITEM",
		"Name=accela_select_language", "Value=", "ENDITEM",
		"Name=action", "Value=JSwitchLanguage", "ENDITEM",
		"Name=switchLanguageForV360", "Value=false", "ENDITEM",
		"LAST");

	web_url("favicon.ico", 
		"URL=https://aa-pt6245.dev.accela.com:5443/favicon.ico", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"LAST");

	lr_think_time(11);

	lr_start_transaction("Login");

	web_custom_request("loginAction.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/ssoAdapter/loginAction.do?requestType=checkWebSSOAdapter&servProvCode=Flagstaff", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t21.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded", 
		"LAST");

	lr_think_time(5);

	web_submit_data("hostSignon.do_3",
		"Action=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true",
		"Snapshot=t22.inf",
		"Mode=HTTP",
		"ITEMDATA",
		"Name=action", "Value=signon", "ENDITEM",
		"Name=successUrl", "Value=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", "ENDITEM",
		"Name=cookieUserName", "Value=", "ENDITEM",
		"Name=cookieAgencyName", "Value=", "ENDITEM",
		"Name=requestToken", "Value={requestToken}", "ENDITEM",
		"Name=requestLanguageToken", "Value={requestLanguageToken}", "ENDITEM",
		"Name=password1", "Value=", "ENDITEM",
		"Name=servProvCode", "Value=Flagstaff", "ENDITEM",
		"Name=username", "Value=admin", "ENDITEM",
		"Name=password", "Value=admin", "ENDITEM",
		"Name=accela_select_language", "Value=en_US", "ENDITEM",
		"Name=action", "Value=JSwitchLanguage", "ENDITEM",
		"Name=switchLanguageForV360", "Value=false", "ENDITEM",
		"Name=submit_", "Value=Login", "ENDITEM",
		"LAST");

	web_url("dashboard.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?successUrl=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t23.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("auth.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/auth.do?signOffScript=https://aa-pt6245.dev.accela.com:5443/portlets/security/signout.do&switchAgencyScript=https://aa-pt6245.dev.accela.com:5443/portlets/commons/sso/blank.jsp&CSRF_REQ_PARAM=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t24.inf", 
		"LAST");

	web_url("dashboard.do_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t25.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("app.min.css", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/styles/app.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t26.inf", 
		"LAST");

	web_url("bootstrap.min.css", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/styles/bootstrap/bootstrap.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t27.inf", 
		"LAST");

	web_url("angular.min.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/bower_components/angular/angular.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t28.inf", 
		"LAST");

	web_url("ng-sortable.min.css", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/styles/ng-sortable.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t29.inf", 
		"LAST");

	web_url("angular-sanitize.min.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/bower_components/angular-sanitize/angular-sanitize.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t30.inf", 
		"LAST");

	web_url("modernizr.2.8.3.custom.min.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/lib/modernizr.2.8.3.custom.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t31.inf", 
		"LAST");

	web_url("sprintf.min.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/bower_components/sprintf/dist/sprintf.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t32.inf", 
		"LAST");

	web_url("ui-bootstrap-tpls.min.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/bower_components/angular-bootstrap/ui-bootstrap-tpls.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t33.inf", 
		"LAST");

	web_url("angular-touch.min.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/bower_components/angular-touch/angular-touch.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t34.inf", 
		"LAST");

	web_url("stacktrace.min.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/bower_components/stacktrace-js/dist/stacktrace.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t35.inf", 
		"LAST");

	web_url("chrome-iframe-issue-fix.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/chrome-iframe-issue-fix.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t36.inf", 
		"LAST");

	web_url("angular-ui-router.min.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/bower_components/angular-ui-router/release/angular-ui-router.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t37.inf", 
		"LAST");

	web_url("angular-slider.min.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/bower_components/venturocket-angular-slider/build/angular-slider.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t38.inf", 
		"LAST");

	web_url("lodash.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/bower_components/lodash/lodash.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t39.inf", 
		"LAST");

	web_url("en-us.min.css", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/styles/en-us.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t40.inf", 
		"LAST");

	web_url("smart-table.min.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/bower_components/angular-smart-table/dist/smart-table.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t41.inf", 
		"LAST");

	web_url("angular-deferred-bootstrap.min.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/bower_components/angular-deferred-bootstrap/angular-deferred-bootstrap.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t42.inf", 
		"LAST");

	web_url("handlebars.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/bower_components/handlebars/handlebars.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t43.inf", 
		"LAST");

	web_url("angular-locale_en-us.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/bower_components/angular-i18n/angular-locale_en-us.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t44.inf", 
		"LAST");

	web_url("config.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/config.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t45.inf", 
		"LAST");

	web_url("accela.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/accela.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t46.inf", 
		"LAST");

	web_url("ng-csv.min.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/bower_components/ng-csv/build/ng-csv.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t47.inf", 
		"LAST");

	web_url("click-outside.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/directives/click-outside.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t48.inf", 
		"LAST");

	web_url("ct-ui-router-extras.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/bower_components/ui-router-extras/release/ct-ui-router-extras.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t49.inf", 
		"LAST");

	web_url("i18n-keys.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/data/i18n-keys.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t50.inf", 
		"LAST");

	web_url("autofocus.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/directives/autofocus.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t51.inf", 
		"LAST");

	web_url("content-limit-to.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/directives/content-limit-to.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t52.inf", 
		"LAST");

	web_url("ng-repeat-finish.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/directives/ng-repeat-finish.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t53.inf", 
		"LAST");

	web_url("on-load.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/directives/on-load.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t54.inf", 
		"LAST");

	web_url("select-on-focus.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/directives/select-on-focus.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t55.inf", 
		"LAST");

	web_url("module.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/module.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t56.inf", 
		"LAST");

	web_url("user-profile.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/entities/user-profile.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t57.inf", 
		"LAST");

	web_url("stacktrace-wrapper.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/stacktrace-wrapper.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t58.inf", 
		"LAST");

	web_url("sliderbar-controller.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/controllers/sliderbar-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t59.inf", 
		"LAST");

	web_url("table-height-sync.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/directives/table-height-sync.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t60.inf", 
		"LAST");

	web_url("styled-checkbox.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/directives/styled-checkbox.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t61.inf", 
		"LAST");

	web_url("typeahead-filter.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/directives/typeahead-filter.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t62.inf", 
		"LAST");

	web_url("launchpad-page.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/entities/launchpad-page.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t63.inf", 
		"LAST");

	web_url("work-space.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/entities/work-space.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t64.inf", 
		"LAST");

	web_url("base-filter.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/filters/base-filter.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t65.inf", 
		"LAST");

	web_url("task.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/entities/task.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t66.inf", 
		"LAST");

	web_url("custom-date-filter.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/filters/custom-date-filter.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t67.inf", 
		"LAST");

	web_url("highlight.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/filters/highlight.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t68.inf", 
		"LAST");

	web_url("translate-filter.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/filters/translate-filter.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t69.inf", 
		"LAST");

	web_url("reverse.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/filters/reverse.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t70.inf", 
		"LAST");

	web_url("dashboard-model.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/models/dashboard-model.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t71.inf", 
		"LAST");

	web_url("overflow.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/filters/overflow.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t72.inf", 
		"LAST");

	web_url("user-model.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/models/user-model.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t73.inf", 
		"LAST");

	web_url("agency-service.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/services/agency-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t74.inf", 
		"LAST");

	web_url("http-interceptor.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/services/http-interceptor.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t75.inf", 
		"LAST");

	web_url("data-service.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/services/data-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t76.inf", 
		"LAST");

	web_url("i18n-service.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/services/i18n-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t77.inf", 
		"LAST");

	web_url("logging-service.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/services/logging-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t78.inf", 
		"LAST");

	web_url("modal-dialog-service.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/services/modal-dialog-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t79.inf", 
		"LAST");

	web_url("overlay-service.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/services/overlay-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t80.inf", 
		"LAST");

	web_url("safe-apply.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/services/safe-apply.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t81.inf", 
		"LAST");

	web_url("user-manager.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/services/user-manager.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t82.inf", 
		"LAST");

	web_url("slideout-service.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/services/slideout-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t83.inf", 
		"LAST");

	web_url("keepalive-controller.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/controllers/keepalive-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t84.inf", 
		"LAST");

	web_url("automation-controller.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/automation-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t85.inf", 
		"LAST");

	web_url("module.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/module.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t86.inf", 
		"LAST");

	web_url("classic-admin-controller.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/admin/classic-admin-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t87.inf", 
		"LAST");

	web_url("spaces-controller.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/controllers/spaces-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t88.inf", 
		"LAST");

	web_url("space-controller.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/controllers/space-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t89.inf", 
		"LAST");

	web_url("space-portlet-controller.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/controllers/space-portlet-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t90.inf", 
		"LAST");

	web_url("main-menu-flyout.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/directives/main-menu-flyout.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t91.inf", 
		"LAST");

	web_url("space-manager.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/services/space-manager.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t92.inf", 
		"LAST");

	web_url("space-context-menu.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/directives/space-context-menu.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t93.inf", 
		"LAST");

	web_url("space-icon-factory.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/services/space-icon-factory.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t94.inf", 
		"LAST");

	web_url("space-list.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/directives/space-list.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t95.inf", 
		"LAST");

	web_url("space-repository.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/services/space-repository.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t96.inf", 
		"LAST");

	web_url("portlet-session-state.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/services/portlet-session-state.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t97.inf", 
		"LAST");

	web_url("server-session-service.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/services/server-session-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t98.inf", 
		"LAST");

	web_url("module.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/dashboard/module.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t99.inf", 
		"LAST");

	web_url("agency-switch.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/directives/agency-switch.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t100.inf", 
		"LAST");

	web_url("launchpad-controller.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/dashboard/launchpad/controllers/launchpad-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t101.inf", 
		"LAST");

	web_url("favorite-pages-toggle.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/dashboard/launchpad/directives/favorite-pages-toggle.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t102.inf", 
		"LAST");

	web_url("launchpad-manager.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/dashboard/launchpad/services/launchpad-manager.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t103.inf", 
		"LAST");

	web_url("task-dashboard-controller.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/dashboard/task/controllers/task-dashboard-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t104.inf", 
		"LAST");

	web_url("task-card-condition.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/dashboard/task/directives/task-card-condition.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t105.inf", 
		"LAST");

	web_url("task-card-menu.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/dashboard/task/directives/task-card-menu.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t106.inf", 
		"LAST");

	web_url("task-filter.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/dashboard/task/directives/task-filter.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t107.inf", 
		"LAST");

	web_url("task-flyout-toggle.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/dashboard/task/directives/task-flyout-toggle.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t108.inf", 
		"LAST");

	web_url("task-manager.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/dashboard/task/services/task-manager.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t109.inf", 
		"LAST");

	web_url("module.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/globalsearch/module.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t110.inf", 
		"LAST");

	web_url("globalsearch-controller.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/globalsearch/controllers/globalsearch-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t111.inf", 
		"LAST");

	web_url("asset-pagination-controller.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/globalsearch/controllers/asset-pagination-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t112.inf", 
		"LAST");

	web_url("contact-pagination-controller.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/globalsearch/controllers/contact-pagination-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t113.inf", 
		"LAST");

	web_url("document-pagination-controller.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/globalsearch/controllers/document-pagination-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t114.inf", 
		"LAST");

	web_url("location-pagination-controller.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/globalsearch/controllers/location-pagination-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t115.inf", 
		"LAST");

	web_url("parcel-pagination-controller.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/globalsearch/controllers/parcel-pagination-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t116.inf", 
		"LAST");

	web_url("record-pagination-controller.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/globalsearch/controllers/record-pagination-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t117.inf", 
		"LAST");

	web_url("professional-pagination-controller.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/globalsearch/controllers/professional-pagination-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t118.inf", 
		"LAST");

	web_url("alt-hilite.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/globalsearch/directives/alt-hilite.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t119.inf", 
		"LAST");

	web_url("globalsearch-service.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/globalsearch/services/globalsearch-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t120.inf", 
		"LAST");

	web_url("portlet-iframe-controller.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/portlet/portlet-iframe-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t121.inf", 
		"LAST");

	web_url("dirPagination.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/lib/custom/dirPagination.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t122.inf", 
		"LAST");

	web_url("RoboHelp_CSH.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/lib/RoboHelp_CSH.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t123.inf", 
		"LAST");

	web_url("ng-sortable.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/lib/custom/ng-sortable.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t124.inf", 
		"LAST");

	web_url("sessionmonitor.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/lib/sessionmonitor.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t125.inf", 
		"LAST");

	web_url("showModalDialog.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/lib/showModalDialog.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t126.inf", 
		"LAST");

	web_url("popover.tpl.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/templates/popover.tpl.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t127.inf", 
		"LAST");

	web_url("keepalive.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/controllers/keepalive.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t128.inf", 
		"LAST");

	web_url("ajax-loader.gif", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/reskin/ajax-loader.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t129.inf", 
		"LAST");

	web_url("compiled.tpl.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/templates/compiled.tpl.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t130.inf", 
		"LAST");

	web_url("today", 
		"URL=http://cdn.content.prod.cms.msn.com/singletile/summary/alias/experiencebyname/today?market=en-US&source=appxmanifest&tenant=amp&vertical=sports", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t131.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("today_2", 
		"URL=http://cdn.content.prod.cms.msn.com/singletile/summary/alias/experiencebyname/today?market=en-US&source=appxmanifest&tenant=amp&vertical=finance", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t132.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("preinstall", 
		"URL=http://tile-service.weather.microsoft.com/en-US/livetile/preinstall?region=US&appid=C98EA5B0842DBB9405BBF071E1DA76512D21FE36&FORM=Threshold", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t133.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("today_3", 
		"URL=http://cdn.content.prod.cms.msn.com/singletile/summary/alias/experiencebyname/today?market=en-US&source=appxmanifest&tenant=amp&vertical=news", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t134.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("switchAgency.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/switchAgency.do?mode=list", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t135.inf", 
		"LAST");

	web_custom_request("text.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/text.do?mode=localizedText", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t136.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"AANewUX_ApplicationMenu_Administration\":\"\",\"AANewUX_ApplicationMenu_CivicPlatform\":\"\",\"AANewUX_ApplicationMenu_ExitAdministration\":\"\",\"AANewUX_ApplicationMenu_ClassicAdministration\":\"\",\"AANewUX_ApplicationMenu_ExitClassicAdministration\":\"\",\"AANewUX_ApplicationMenu_Help\":\"\",\"AANewUX_ApplicationMenu_SignOut\":\"\",\"AANewUX_ApplicationMenu_SwitchToV360\":\"\",\"AANewUX_Dialog_Close\":\"\",\"AANewUX_Dialog_PortletErrorTitle\":\"\",\"AANewUX_Dialog_URLRequired\":\"\",\""
		"AANewUX_Error_InvalidResponse\":\"\",\"AANewUX_Error_SessionTimedOut\":\"\",\"AANewUX_GIS_AccelaRecords\":\"\",\"AANewUX_GIS_Address\":\"\",\"AANewUX_GIS_AllRecords\":\"\",\"AANewUX_GIS_AllTransactions\":\"\",\"AANewUX_GIS_AssetGroup\":\"\",\"AANewUX_GIS_AssetID\":\"\",\"AANewUX_GIS_AssetType\":\"\",\"AANewUX_GIS_ClassType\":\"\",\"AANewUX_GIS_AttachToRecord\":\"\",\"AANewUX_GIS_CreateNewRecord\":\"\",\"AANewUX_GIS_CreateWorkOrder\":\"\",\"AANewUX_GIS_ExportToCSV\":\"\",\"AANewUX_GIS_Description\""
		":\"\",\"AANewUX_GIS_GISObjects\":\"\",\"AANewUX_GIS_HideDetails\":\"\",\"AANewUX_GIS_InstallDate\":\"\",\"AANewUX_GIS_InspectionType\":\"\",\"AANewUX_GIS_OpenedDate\":\"\",\"AANewUX_GIS_Owner\":\"\",\"AANewUX_GIS_Parcel\":\"\",\"AANewUX_GIS_ParcelID\":\"\",\"AANewUX_GIS_RecordID\":\"\",\"AANewUX_GIS_Records\":\"\",\"AANewUX_GIS_RecordType\":\"\",\"AANewUX_GIS_ScheduledDate\":\"\",\"AANewUX_GIS_SelectNearbyFeatures\":\"\",\"AANewUX_GIS_SendGISFeature\":\"\",\"AANewUX_GIS_ShowDetails\":\"\",\""
		"AANewUX_GIS_ShowDocument\":\"\",\"AANewUX_GIS_ShowingResults\":\"\",\"AANewUX_GIS_Status\":\"\",\"AANewUX_GIS_Transactions\":\"\",\"AANewUX_GIS_XCoordinate\":\"\",\"AANewUX_GIS_YCoordinate\":\"\",\"AANewUX_GIS_ZipCode\":\"\",\"AANewUX_GlobalSearch_Address\":\"\",\"AANewUX_GlobalSearch_Agency\":\"\",\"AANewUX_GlobalSearch_AltID\":\"\",\"AANewUX_GlobalSearch_Applicant\":\"\",\"AANewUX_GlobalSearch_ApplicationName\":\"\",\"AANewUX_GlobalSearch_AssetInfo\":\"\",\"AANewUX_GlobalSearch_AssetsTab\":\"\","
		"\"AANewUX_GlobalSearch_BusinessName\":\"\",\"AANewUX_GlobalSearch_ColumnView\":\"\",\"AANewUX_GlobalSearch_Contact\":\"\",\"AANewUX_GlobalSearch_ContactNumber\":\"\",\"AANewUX_GlobalSearch_ContactBusinessName\":\"\",\"AANewUX_GlobalSearch_ContactsTab\":\"\",\"AANewUX_GlobalSearch_ContactType\":\"\",\"AANewUX_GlobalSearch_CreatedDate\":\"\",\"AANewUX_GlobalSearch_CreatedOn\":\"\",\"AANewUX_GlobalSearch_Description\":\"\",\"AANewUX_GlobalSearch_Document\":\"\",\""
		"AANewUX_GlobalSearch_DocumentCategory\":\"\",\"AANewUX_GlobalSearch_DocumentName\":\"\",\"AANewUX_GlobalSearch_DocumentStatus\":\"\",\"AANewUX_GlobalSearch_DocumentsTab\":\"\",\"AANewUX_GlobalSearch_Email\":\"\",\"AANewUX_GlobalSearch_FilterButton\":\"\",\"AANewUX_GlobalSearch_FullName\":\"\",\"AANewUX_GlobalSearch_LastPage\":\"\",\"AANewUX_GlobalSearch_LastUpdatedOn\":\"\",\"AANewUX_GlobalSearch_LicenseExpiresOn\":\"\",\"AANewUX_GlobalSearch_LicenseIssuedOn\":\"\",\""
		"AANewUX_GlobalSearch_LicenceProfessionalsTab\":\"\",\"AANewUX_GlobalSearch_LicenseType\":\"\",\"AANewUX_GlobalSearch_Location\":\"\",\"AANewUX_GlobalSearch_LocationsTab\":\"\",\"AANewUX_GlobalSearch_NextPageLink\":\"\",\"AANewUX_GlobalSearch_Owner\":\"\",\"AANewUX_GlobalSearch_Page\":\"\",\"AANewUX_GlobalSearch_Parcel\":\"\",\"AANewUX_GlobalSearch_ParcelsTab\":\"\",\"AANewUX_GlobalSearch_PhoneNumber\":\"\",\"AANewUX_GlobalSearch_ProjectName\":\"\",\"AANewUX_GlobalSearch_Record\":\"\",\""
		"AANewUX_GlobalSearch_RecordID\":\"\",\"AANewUX_GlobalSearch_RecordInfo\":\"\",\"AANewUX_GlobalSearch_RecordsTab\":\"\",\"AANewUX_GlobalSearch_RecordType\":\"\",\"AANewUX_GlobalSearch_ReportedType\":\"\",\"AANewUX_GlobalSearch_ResultsCount\":\"\",\"AANewUX_GlobalSearch_Review\":\"\",\"AANewUX_GlobalSearch_PreviousPageLink\":\"\",\"AANewUX_GlobalSearch_ShortNotes\":\"\",\"AANewUX_GlobalSearch_Showing\":\"\",\"AANewUX_GlobalSearch_SortByMostRecent\":\"\",\"AANewUX_GlobalSearch_Status\":\"\",\""
		"AANewUX_GlobalSearch_StatusDate\":\"\",\"AANewUX_GlobalSearch_StateLicenseNo\":\"\",\"AANewUX_GlobalSearch_TabRecordCount\":\"\",\"AANewUX_GlobalSearch_TradeName\":\"\",\"AANewUX_GlobalSearch_Type\":\"\",\"AANewUX_GlobalSearchForm_Advanced\":\"\",\"AANewUX_GlobalSearchForm_RecentSearches\":\"\",\"AANewUX_GlobalSearchForm_InputPlaceholder\":\"\",\"AANewUX_GlobalSearchForm_SubmitButtonText\":\"\",\"AANewUX_Launchpad_Address\":\"\",\"AANewUX_Launchpad_AddFavorite\":\"\",\"AANewUX_Launchpad_AllPages\""
		":\"\",\"AANewUX_Launchpad_Assets\":\"\",\"AANewUX_Launchpad_ClearAll\":\"\",\"AANewUX_Launchpad_Contacts\":\"\",\"AANewUX_Launchpad_Filter\":\"\",\"AANewUX_Launchpad_FilterList\":\"\",\"AANewUX_Launchpad_HideAllPages\":\"\",\"AANewUX_Launchpad_New\":\"\",\"AANewUX_Launchpad_NewApplication\":\"\",\"AANewUX_Launchpad_Owners\":\"\",\"AANewUX_Launchpad_Parcels\":\"\",\"AANewUX_Launchpad_Professionals\":\"\",\"AANewUX_Launchpad_Recent\":\"\",\"AANewUX_Launchpad_ShowAllPages\":\"\",\""
		"AANewUX_Launchpad_YourPages\":\"\",\"AANewUX_Launchpad_RemoveFavorite\":\"\",\"AANewUX_MainMenu_Label\":\"\",\"AANewUX_MainMenu_DashboardActive\":\"\",\"AANewUX_MainMenu_DashboardOpen\":\"\",\"AANewUX_MainMenu_GlobalSearchOpen\":\"\",\"AANewUX_MainMenu_GlobalSearchClose\":\"\",\"AANewUX_MainMenu_LaunchpadOpen\":\"\",\"AANewUX_MainMenu_LaunchpadClose\":\"\",\"AANewUX_Task_Actions\":\"\",\"AANewUX_Task_Active\":\"\",\"AANewUX_Task_ActivityDeleteSuccess\":\"\",\"AANewUX_Task_ActivityID\":\"\",\""
		"AANewUX_Task_Address\":\"\",\"AANewUX_Task_Agenda\":\"\",\"AANewUX_Task_AllPages\":\"\",\"AANewUX_Task_AltID\":\"\",\"AANewUX_Task_AlternateID\":\"\",\"AANewUX_Task_Assign\":\"\",\"AANewUX_Task_Assigned\":\"\",\"AANewUX_Task_AssignedTo\":\"\",\"AANewUX_Task_Cancel\":\"\",\"AANewUX_Task_Category\":\"\",\"AANewUX_Task_CategoryACTIVITY\":\"\",\"AANewUX_Task_CategoryDOCUMENT\":\"\",\"AANewUX_Task_CategoryINSPECTION\":\"\",\"AANewUX_Task_CategoryMEETING\":\"\",\"AANewUX_Task_CategoryWORKFLOW\":\"\",\""
		"AANewUX_Task_Claim\":\"\",\"AANewUX_Task_Clear\":\"\",\"AANewUX_Task_ColumnView\":\"\",\"AANewUX_Task_Completed\":\"\",\"AANewUX_Task_ConditionApplied\":\"\",\"AANewUX_Task_ConditionPlusNMore\":\"\",\"AANewUX_Task_Delete\":\"\",\"AANewUX_Task_DocumentActionNotDefined\":\"\",\"AANewUX_Task_DocumentPreviewPermissionFail\":\"\",\"AANewUX_Task_Download\":\"\",\"AANewUX_Task_Due\":\"\",\"AANewUX_Task_DueInNDays\":\"\",\"AANewUX_Task_DueDateNotAssigned\":\"\",\"AANewUX_Task_DueToday\":\"\",\""
		"AANewUX_Task_Duplicate\":\"\",\"AANewUX_Task_Duration\":\"\",\"AANewUX_Task_DurationHour\":\"\",\"AANewUX_Task_DurationHours\":\"\",\"AANewUX_Task_DurationMinute\":\"\",\"AANewUX_Task_DurationMinutes\":\"\",\"AANewUX_Task_ExportToCSV\":\"\",\"AANewUX_Task_Filter\":\"\",\"AANewUX_Task_FilterAdvanced\":\"\",\"AANewUX_Task_FilterApply\":\"\",\"AANewUX_Task_FilterClearAll\":\"\",\"AANewUX_Task_FilterDateRangeAssigned\":\"\",\"AANewUX_Task_FilterDateRangeDue\":\"\",\"AANewUX_Task_FilterDateRangeOpen\""
		":\"\",\"AANewUX_Task_FilterDateRangeStatus\":\"\",\"AANewUX_Task_FilterFrom\":\"\",\"AANewUX_Task_FilterSelected\":\"\",\"AANewUX_Task_FilterSave\":\"\",\"AANewUX_Task_FilterStatusCompleted\":\"\",\"AANewUX_Task_FilterTabAssignedTo\":\"\",\"AANewUX_Task_FilterTabDateRange\":\"\",\"AANewUX_Task_FilterTabSaved\":\"\",\"AANewUX_Task_FilterTabStatus\":\"\",\"AANewUX_Task_FilterTabType\":\"\",\"AANewUX_Task_FilterTo\":\"\",\"AANewUX_Task_Group\":\"\",\"AANewUX_Task_HasNoAddress\":\"\",\""
		"AANewUX_Task_HasNoCity\":\"\",\"AANewUX_Task_HasNoComment\":\"\",\"AANewUX_Task_HasNoDescription\":\"\",\"AANewUX_Task_HasNoLocation\":\"\",\"AANewUX_Task_HasNoMeetingBody\":\"\",\"AANewUX_Task_HasNoScheduledTime\":\"\",\"AANewUX_Task_InspectionCancelSuccess\":\"\",\"AANewUX_Task_InspectionDeleteFail\":\"\",\"AANewUX_Task_InspectionDeleteSuccess\":\"\",\"AANewUX_Task_InTheAfternoon\":\"\",\"AANewUX_Task_InTheMorning\":\"\",\"AANewUX_Task_Location\":\"\",\"AANewUX_Task_LoadMore\":\"\",\""
		"AANewUX_Task_LoadingTasks\":\"\",\"AANewUX_Task_MeetingRejectedSuccess\":\"\",\"AANewUX_Task_NoMoreRecordsAvailable\":\"\",\"AANewUX_Task_NoTasksAssigned\":\"\",\"AANewUX_Task_NoTasksFound\":\"\",\"AANewUX_Task_NoFilteredTasksFound\":\"\",\"AANewUX_Task_NoQuickQueriesFound\":\"\",\"AANewUX_Task_PageLabel\":\"\",\"AANewUX_Task_PageOfLabel\":\"\",\"AANewUX_Task_Preview\":\"\",\"AANewUX_Task_PreviewDocument\":\"\",\"AANewUX_Task_Print\":\"\",\"AANewUX_Task_QuickQueries\":\"\",\"AANewUX_Task_Reassign"
		"\":\"\",\"AANewUX_Task_RecordAgendaSetSuccess\":\"\",\"AANewUX_Task_RecordActionDownloadSuccess\":\"\",\"AANewUX_Task_RecordDuplicateSuccess\":\"\",\"AANewUX_Task_RecordID\":\"\",\"AANewUX_Task_RecordReassignSuccess\":\"\",\"AANewUX_Task_RecordRemoveSuccess\":\"\",\"AANewUX_Task_RecordRescheduleSuccess\":\"\",\"AANewUX_Task_RecordReviewSuccess\":\"\",\"AANewUX_Task_RecordType\":\"\",\"AANewUX_Task_Reject\":\"\",\"AANewUX_Task_Release\":\"\",\"AANewUX_Task_Remove\":\"\",\"AANewUX_Task_Reschedule\""
		":\"\",\"AANewUX_Task_Result\":\"\",\"AANewUX_Task_Review\":\"\",\"AANewUX_Task_Schedule\":\"\",\"AANewUX_Task_ShowingNTasks\":\"\",\"AANewUX_Task_ShowingNFilteredTasks\":\"\",\"AANewUX_Task_Sort\":\"\",\"AANewUX_Task_Success\":\"\",\"AANewUX_Task_TaskErrorHeading\":\"\",\"AANewUX_Task_TaskName\":\"\",\"AANewUX_Task_TaskListFixedColumnHeader\":\"\",\"AANewUX_Task_TaskListDueDateHeader\":\"\",\"AANewUX_Task_TaskListFlagsHeader\":\"\",\"AANewUX_Task_TaskListStatusHeader\":\"\",\""
		"AANewUX_Task_TaskListDetailsHeader\":\"\",\"AANewUX_Task_Tasks\":\"\",\"AANewUX_Task_TotalTasks\":\"\",\"AANewUX_Task_Type\":\"\",\"AANewUX_Task_ViewDocInfo\":\"\",\"AANewUX_Task_Warning\":\"\",\"AANewUX_Task_Workflow\":\"\",\"AANewUX_Task_WorkflowClaimFail\":\"\",\"AANewUX_Task_WorkflowClaimPermissionFail\":\"\",\"AANewUX_Task_WorkflowClaimSuccess\":\"\",\"AANewUX_Task_WorkflowReleaseFail\":\"\",\"AANewUX_Task_WorkflowReleasePermissionFail\":\"\",\"AANewUX_Task_WorkflowReleaseSuccess\":\"\",\""
		"AANewUX_Tooltip_CardView\":\"\",\"AANewUX_Tooltip_ListView\":\"\",\"AANewUX_Tooltip_Map\":\"\",\"AANewUX_Tooltip_SuperAgencyDashboard\":\"\",\"AANewUX_Tooltip_Tasks\":\"\",\"AANewUX_Workspace_Close\":\"\",\"AANewUX_Workspace_More\":\"\",\"AANewUX_Workspace_OpenSpaces\":\"\",\"AANewUX_Workspace_Pin\":\"\",\"AANewUX_Workspace_Unpin\":\"\"}", 
		"LAST");

	web_url("switchAgency.do_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/switchAgency.do?mode=init", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t137.inf", 
		"LAST");

	web_url("favicon.ico_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/favicon.ico", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t138.inf", 
		"LAST");

	web_url("userSecurityProfile.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/userSecurityProfile.do?mode=getSecurityProfileByModule&items=0375", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t139.inf", 
		"LAST");

	web_url("icon-space-pin.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/menubar/icon-space-pin.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t140.inf", 
		"LAST");

	web_url("icon-space-pin-dark.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/menubar/icon-space-pin-dark.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t141.inf", 
		"LAST");

	web_url("spacesMenu.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/spacesMenu.do?mode=list", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t142.inf", 
		"LAST");

	web_custom_request("userinfo.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/user/userinfo.do?mode=userInfo", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t143.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=utf-8", 
		"Body={}", 
		"LAST");

	web_url("glyphicons-halflings-regular.eot", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/styles/fonts/glyphicons-halflings-regular.eot?", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t144.inf", 
		"LAST");

	web_url("userSecurityProfile.do_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/userSecurityProfile.do?mode=getSecurityProfileByModule&items=0008,8488,8143,8400,8145,8144,8478,8213,8477,8487,8132", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t145.inf", 
		"LAST");

	web_url("icon-space-grey.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/menubar/icon-space-grey.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t146.inf", 
		"LAST");

	web_url("icon-settings.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/icon-settings.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t147.inf", 
		"LAST");

	web_url("recentlyViewed.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/recentlyViewed.do?mode=getRecentlyViewedItems", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t148.inf", 
		"LAST");

	web_url("launchPad.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/launchPad.do?mode=getUserPages", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t149.inf", 
		"LAST");

	web_url("icon-search-inactive.svg", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/menubar/icon-search-inactive.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t150.inf", 
		"LAST");

	web_url("menu_people_icon_dark.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/space-icons/menu_people_icon_dark.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t151.inf", 
		"LAST");

	web_url("icon-alert.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/icon-alert.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t152.inf", 
		"LAST");

	web_url("menu_location_icon.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/space-icons/menu_location_icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t153.inf", 
		"LAST");

	web_url("menu_assets_icon.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/space-icons/menu_assets_icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t154.inf", 
		"LAST");

	web_url("icon-dashboard-tasks-inactive.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/menubar/icon-dashboard-tasks-inactive.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t155.inf", 
		"LAST");

	web_url("icon-dashboard-tasks-active.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/menubar/icon-dashboard-tasks-active.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t156.inf", 
		"LAST");

	web_url("icon-dashboard-map-active.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/menubar/icon-dashboard-map-active.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t157.inf", 
		"LAST");

	web_url("icon-add.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/launchpad/icon-add.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t158.inf", 
		"LAST");

	web_url("no-tasks.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/task/no-tasks.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t159.inf", 
		"LAST");

	web_url("session.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.mytask-list", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t160.inf", 
		"LAST");

	web_url("favoritePages.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/favoritePages.do?mode=list", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t161.inf", 
		"LAST");

	web_url("icon-star.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/launchpad/icon-star.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t162.inf", 
		"LAST");

	web_url("icon-expand.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/icon-expand.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t163.inf", 
		"LAST");

	web_url("switchAgency.do_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/switchAgency.do?mode=setAgency&serviceProviderCode=FLAGSTAFF", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t164.inf", 
		"LAST");

	web_url("icon-grabber.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/launchpad/icon-grabber.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t165.inf", 
		"LAST");

	web_url("icon-favorite.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/launchpad/icon-favorite.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t166.inf", 
		"LAST");

	web_url("getTaskFilterStatusList.json", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/mock-api/getTaskFilterStatusList.json", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t167.inf", 
		"LAST");

	web_url("dashboardTaskQuickQueries.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboardTaskQuickQueries.do", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t168.inf", 
		"LAST");

	web_url("dashboardTaskCards.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboardTaskCards.do?mode=multiAgencyTaskCounts&quickQueryId=", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t169.inf", 
		"LAST");

	web_url("dashboardTaskCards.do_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboardTaskCards.do?end=6&mode=initTask&serviceProviderCode=FLAGSTAFF&start=1", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t170.inf", 
		"LAST");

	web_url("icon-toggle.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/task/icon-toggle.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t171.inf", 
		"LAST");

	web_url("icon-menu-arrow-down.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/icon-menu-arrow-down.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t172.inf", 
		"LAST");

	web_url("icon-cardview-active.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/menubar/icon-cardview-active.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t173.inf", 
		"LAST");

	web_url("icon-listview-inactive.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/menubar/icon-listview-inactive.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t174.inf", 
		"LAST");

	web_url("icon-notice.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/task/icon-notice.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t175.inf", 
		"LAST");

	lr_end_transaction("Login",2);

	lr_think_time(15);

	lr_start_transaction("TC1_4_Click_Record");

	web_url("session.do_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t176.inf", 
		"LAST");

	web_url("icon-space-expanded.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/menubar/icon-space-expanded.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t177.inf", 
		"LAST");

	web_url("recentlyViewed.do_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/recentlyViewed.do?mode=getRecentlyViewedItems", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t178.inf", 
		"LAST");

	web_url("session.do_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.mytask-list", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t179.inf", 
		"LAST");

	web_url("session.do_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t180.inf", 
		"LAST");

	web_url("session.do_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.c7ae1", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t181.inf", 
		"LAST");

	web_url("icon-record.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/space-icons/icon-record.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t182.inf", 
		"LAST");

	web_url("icon-space-context-menu.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/menubar/icon-space-context-menu.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t183.inf", 
		"LAST");

	web_url("myCAPDetailPortlet.jsp", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t184.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("portlet-iframe-content.css", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/styles/portlet-iframe-content.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t185.inf", 
		"LAST");

	web_url("ac360base.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t186.inf", 
		"LAST");

	web_url("blank.jsp", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t187.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("blank.jsp_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t188.inf", 
		"Mode=HTTP", 
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=TRANSACTION_TOKEN_KEY_FOR_CAPSEARCHFORM",
		"RegExp=name=\"TRANSACTION_TOKEN_KEY_FOR_CAPSEARCHFORM\"\\ value=\"(.*?)\">\\\r\\\n\\\t\\\t<input\\ type",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

	web_url("capSearch.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t189.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("jquery-1.11.0.min.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t190.inf", 
		"LAST");

	web_url("ac360base.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t191.inf", 
		"LAST");

	web_url("blank.jsp_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t192.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("ac360base.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t193.inf", 
		"LAST");

	web_url("windowCloseOverride.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/lib/windowCloseOverride.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t194.inf", 
		"LAST");

	web_url("memoryLeakPatch.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/memoryLeakPatch.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t195.inf", 
		"LAST");

	web_url("Ac360ToolManager.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t196.inf", 
		"LAST");

	web_url("ac360InputBoxHotKey.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360InputBoxHotKey.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t197.inf", 
		"LAST");

	web_url("jquery-1.11.0.min.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t198.inf", 
		"LAST");

	web_url("bootstrap.css", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/styles/bootstrap/bootstrap.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t199.inf", 
		"LAST");

	web_url("popup.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/popup/popup.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t200.inf", 
		"LAST");

	web_url("widget.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/widget/widget.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t201.inf", 
		"LAST");

	web_url("opos.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/opos.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t202.inf", 
		"LAST");

	web_url("ac360.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t203.inf", 
		"LAST");

	web_url("re-skin-v2.css", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/styles/re-skin-v2.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t204.inf", 
		"LAST");

	web_url("styles.css", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/sky_blue/styles.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t205.inf", 
		"LAST");

	web_url("myTask.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/myTask.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t206.inf", 
		"LAST");

	web_url("hashMap.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t207.inf", 
		"LAST");

	web_url("print-styles.css", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/sky_blue/print-styles.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t208.inf", 
		"LAST");

	web_url("menubar.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/menubar.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t209.inf", 
		"LAST");

	web_url("masked.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/masked.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t210.inf", 
		"LAST");

	web_url("AAHELP.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/docs/AAHELP.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t211.inf", 
		"LAST");

	web_url("watermark.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/watermark.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t212.inf", 
		"LAST");

	web_url("dojo412.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/datapicker/treePicker/js/dojo412.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t213.inf", 
		"LAST");

	web_url("dojo.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/dojo.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t214.inf", 
		"LAST");

	web_url("dojo.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/dojo.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t215.inf", 
		"LAST");

	web_url("jquery.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ext-2.0.2/adapter/jquery/jquery.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t216.inf", 
		"LAST");

	web_url("permitPlus.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/permitPlus.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t217.inf", 
		"LAST");

	web_url("layoutPublic.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/layoutPublic.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t218.inf", 
		"LAST");

	web_url("Previous_Button_Grayed_Out.jpg", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/sky_blue/menu/Previous_Button_Grayed_Out.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t219.inf", 
		"LAST");

	web_url("Next_Button_Default.jpg", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/sky_blue/menu/Next_Button_Default.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t220.inf", 
		"LAST");

	web_url("relatedCAPsPopupBox.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/relatedCAPsPopupBox.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t221.inf", 
		"LAST");

	web_url("ac360ui.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t222.inf", 
		"LAST");

	web_url("ac360ScrollBar.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t223.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t224.inf", 
		"LAST");

	lr_think_time(11);

	web_url("I18N.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t225.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t226.inf", 
		"LAST");

	web_url("checkTextAreaLength.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/checkTextAreaLength.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t227.inf", 
		"LAST");

	web_url("popUp.css", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/sky_blue/popUp.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t228.inf", 
		"LAST");

	web_url("I18N.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t229.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t230.inf", 
		"LAST");

	web_url("I18N.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t231.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t232.inf", 
		"LAST");

	web_url("I18N.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t233.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t234.inf", 
		"LAST");

	web_url("Tree.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/Tree.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t235.inf", 
		"LAST");

	web_url("fx.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/fx.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t236.inf", 
		"LAST");

	web_url("Toggler.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/fx/Toggler.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t237.inf", 
		"LAST");

	web_url("DeferredList.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/DeferredList.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t238.inf", 
		"LAST");

	web_url("_Widget.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_Widget.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t239.inf", 
		"LAST");

	web_url("_base.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t240.inf", 
		"LAST");

	web_url("focus.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/focus.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t241.inf", 
		"LAST");

	web_url("manager.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/manager.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t242.inf", 
		"LAST");

	web_url("place.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/place.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t243.inf", 
		"LAST");

	web_url("AdapterRegistry.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/AdapterRegistry.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t244.inf", 
		"LAST");

	web_url("popup.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/popup.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t245.inf", 
		"LAST");

	web_url("window.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/window.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t246.inf", 
		"LAST");

	web_url("scroll.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/scroll.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t247.inf", 
		"LAST");

	web_url("sniff.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/sniff.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t248.inf", 
		"LAST");

	web_url("typematic.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/typematic.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t249.inf", 
		"LAST");

	web_url("wai.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/wai.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t250.inf", 
		"LAST");

	web_url("_Templated.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_Templated.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t251.inf", 
		"LAST");

	web_url("string.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/string.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t252.inf", 
		"LAST");

	web_url("parser.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/parser.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t253.inf", 
		"LAST");

	web_url("stamp.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/date/stamp.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t254.inf", 
		"LAST");

	web_url("cache.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/cache.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t255.inf", 
		"LAST");

	web_url("_Container.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_Container.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t256.inf", 
		"LAST");

	web_url("_Contained.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_Contained.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t257.inf", 
		"LAST");

	web_url("cookie.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/cookie.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t258.inf", 
		"LAST");

	web_url("regexp.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/regexp.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t259.inf", 
		"LAST");

	web_url("TreeStoreModel.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/tree/TreeStoreModel.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t260.inf", 
		"LAST");

	web_url("ForestStoreModel.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/tree/ForestStoreModel.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t261.inf", 
		"LAST");

	web_url("QueryReadStore.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojox/data/QueryReadStore.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t262.inf", 
		"LAST");

	web_url("sorter.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/data/util/sorter.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t263.inf", 
		"LAST");

	web_url("ArrayList.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojox/collections/ArrayList.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t264.inf", 
		"LAST");

	web_url("_base.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojox/collections/_base.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t265.inf", 
		"LAST");

	web_url("blank.jsp_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t266.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("Map.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Map.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t267.inf", 
		"LAST");

	web_url("ac360base.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t268.inf", 
		"LAST");

	web_custom_request("capConditionList.do",
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/condition/capConditionList.do?mode=viewByCap&module=Building&capIDs=~17BLD-00000-00151-0~17BLD-00000-00150-1~17BLD-00000-00148-2~17BLD-00000-00144-3~17BLD-00000-00143-4",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y",
		"Snapshot=t269.inf",
		"Mode=HTTP",
		"Body=TRANSACTION_TOKEN_KEY_FOR_CAPSEARCHFORM={TRANSACTION_TOKEN_KEY_FOR_CAPSEARCHFORM}&value(FirstEntryURL)=%2Fportlets%2Fcap%2FcapSearch.do%3FsearchBy%3DByCondition%26height%3D270%26mode%3Dinit%26module%3DBuilding%26cleanCapId%3DY%26isGeneralCAP%3DY%26supportMulAgencySearch%3DY&value(CurrentEntryURL)=%2Fportlets%2Fcap%2FcapSearch.do%3FsearchBy%3DByCondition%26height%3D270%26mode%3Dinit%26module%3DBuilding%26cleanCapId%3DY%26isGeneralCAP%3DY%26supportMulAgencySearch%3DY&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=111&exceptionLogID=&portletVars=%7B%7D&generalCAPSearch=&value(selectedQuickQuery)=15614&isShowAllModules=N&moduleList=Building&isGeneralCAP=Y&gisPortletName=&value(source)=&value(initMap)=&objectName=capList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=111&sessionIdFromWindow=q0DRFTb9tIe7JGj-xD%2BPWAnC&listID=&printType=&checkBoxValue=&value(mode)=view&capInfo=&value(capInfo)=ALL&calendarEve"
		"ntId=&calendarId=&isNeedClear=N&currentPartialModule=&isDynaPaging=true&page-navigator-input-id=1&value(CAPID1%2C0)=17BLD&value(CAPID2%2C0)=00000&value(CAPID3%2C0)=00151&value(moduleName%2C0)=Building&value(altID%2C0)=18-2018-1-0049&value(capType.alias)=&value(addressModel.addressLine1)=&value(addressModel.addressLine2)=&value(licenseProfessionalModel.salutation)=&value(licenseProfessionalModel.gender)=&value(licenseProfessionalModel.postOfficeBox)=&value(licenseProfessionalModel.busName2)=&date(licenseProfessionalModel.birthDate)=&value(capContactModel.salutation)=&value(capContactModel.gender)=&value(capContactModel.postOfficeBox)=&date(capContactModel.birthDate)=&value(capContactModel.addressLine1)=&value(capContactModel.addressLine2)=&value(capContactModel.addressLine3)=&value(capContactModel.city)=&value(capContactModel.state)=&value(capContactModel.zip)=&value(capContactModel.countryCode)=&value(activityModel.activityDescription)=&value(activityModel.activityName)=&value(activityModel.activityType)=&d"
		"ate(activityModel.actDate)=&value(activityModel.assignedDeptNumber)=&value(activityModel.assignedStaffID)=&value(addressModel.levelPrefix)=&value(addressModel.levelNumberStart)=&value(addressModel.levelNumberEnd)=&value(addressModel.houseNumberAlphaStart)=&value(addressModel.houseNumberAlphaEnd)=&date(activityModel.actDueDate)=&value(capContactModel.userID)=&value(capContactModel.internalUserFlag)=&value(CAPID1%2C1)=17BLD&value(CAPID2%2C1)=00000&value(CAPID3%2C1)=00150&value(moduleName%2C1)=Building&value(altID%2C1)=18-2018-1-0048&value(capType.alias)=&value(addressModel.addressLine1)=&value(addressModel.addressLine2)=&value(licenseProfessionalModel.salutation)=&value(licenseProfessionalModel.gender)=&value(licenseProfessionalModel.postOfficeBox)=&value(licenseProfessionalModel.busName2)=&date(licenseProfessionalModel.birthDate)=&value(capContactModel.salutation)=&value(capContactModel.gender)=&value(capContactModel.postOfficeBox)=&date(capContactModel.birthDate)=&value(capContactModel.addressLine1)=&value("
		"capContactModel.addressLine2)=&value(capContactModel.addressLine3)=&value(capContactModel.city)=&value(capContactModel.state)=&value(capContactModel.zip)=&value(capContactModel.countryCode)=&value(activityModel.activityDescription)=&value(activityModel.activityName)=&value(activityModel.activityType)=&date(activityModel.actDate)=&value(activityModel.assignedDeptNumber)=&value(activityModel.assignedStaffID)=&value(addressModel.levelPrefix)=&value(addressModel.levelNumberStart)=&value(addressModel.levelNumberEnd)=&value(addressModel.houseNumberAlphaStart)=&value(addressModel.houseNumberAlphaEnd)=&date(activityModel.actDueDate)=&value(capContactModel.userID)=&value(capContactModel.internalUserFlag)=&value(CAPID1%2C2)=17BLD&value(CAPID2%2C2)=00000&value(CAPID3%2C2)=00148&value(moduleName%2C2)=Building&value(altID%2C2)=18-2018-1-0046&value(capType.alias)=&value(addressModel.addressLine1)=&value(addressModel.addressLine2)=&value(licenseProfessionalModel.salutation)=&value(licenseProfessionalModel.gender)=&value(l"
		"icenseProfessionalModel.postOfficeBox)=&value(licenseProfessionalModel.busName2)=&date(licenseProfessionalModel.birthDate)=&value(capContactModel.salutation)=&value(capContactModel.gender)=&value(capContactModel.postOfficeBox)=&date(capContactModel.birthDate)=&value(capContactModel.addressLine1)=&value(capContactModel.addressLine2)=&value(capContactModel.addressLine3)=&value(capContactModel.city)=&value(capContactModel.state)=&value(capContactModel.zip)=&value(capContactModel.countryCode)=&value(activityModel.activityDescription)=&value(activityModel.activityName)=&value(activityModel.activityType)=&date(activityModel.actDate)=&value(activityModel.assignedDeptNumber)=&value(activityModel.assignedStaffID)=&value(addressModel.levelPrefix)=&value(addressModel.levelNumberStart)=&value(addressModel.levelNumberEnd)=&value(addressModel.houseNumberAlphaStart)=&value(addressModel.houseNumberAlphaEnd)=&date(activityModel.actDueDate)=&value(capContactModel.userID)=&value(capContactModel.internalUserFlag)=&value(CAPID1"
		"%2C3)=17BLD&value(CAPID2%2C3)=00000&value(CAPID3%2C3)=00144&value(moduleName%2C3)=Building&value(altID%2C3)=18-2018-1-0042&value(capType.alias)=&value(addressModel.addressLine1)=&value(addressModel.addressLine2)=&value(licenseProfessionalModel.salutation)=&value(licenseProfessionalModel.gender)=&value(licenseProfessionalModel.postOfficeBox)=&value(licenseProfessionalModel.busName2)=&date(licenseProfessionalModel.birthDate)=&value(capContactModel.salutation)=&value(capContactModel.gender)=&value(capContactModel.postOfficeBox)=&date(capContactModel.birthDate)=&value(capContactModel.addressLine1)=&value(capContactModel.addressLine2)=&value(capContactModel.addressLine3)=&value(capContactModel.city)=&value(capContactModel.state)=&value(capContactModel.zip)=&value(capContactModel.countryCode)=&value(activityModel.activityDescription)=&value(activityModel.activityName)=&value(activityModel.activityType)=&date(activityModel.actDate)=&value(activityModel.assignedDeptNumber)=&value(activityModel.assignedStaffID)=&val"
		"ue(addressModel.levelPrefix)=&value(addressModel.levelNumberStart)=&value(addressModel.levelNumberEnd)=&value(addressModel.houseNumberAlphaStart)=&value(addressModel.houseNumberAlphaEnd)=&date(activityModel.actDueDate)=&value(capContactModel.userID)=&value(capContactModel.internalUserFlag)=&value(CAPID1%2C4)=17BLD&value(CAPID2%2C4)=00000&value(CAPID3%2C4)=00143&value(moduleName%2C4)=Building&value(altID%2C4)=18-2018-1-0041&value(capType.alias)=&value(addressModel.addressLine1)=&value(addressModel.addressLine2)=&value(licenseProfessionalModel.salutation)=&value(licenseProfessionalModel.gender)=&value(licenseProfessionalModel.postOfficeBox)=&value(licenseProfessionalModel.busName2)=&date(licenseProfessionalModel.birthDate)=&value(capContactModel.salutation)=&value(capContactModel.gender)=&value(capContactModel.postOfficeBox)=&date(capContactModel.birthDate)=&value(capContactModel.addressLine1)=&value(capContactModel.addressLine2)=&value(capContactModel.addressLine3)=&value(capContactModel.city)=&value(capCont"
		"actModel.state)=&value(capContactModel.zip)=&value(capContactModel.countryCode)=&value(activityModel.activityDescription)=&value(activityModel.activityName)=&value(activityModel.activityType)=&date(activityModel.actDate)=&value(activityModel.assignedDeptNumber)=&value(activityModel.assignedStaffID)=&value(addressModel.levelPrefix)=&value(addressModel.levelNumberStart)=&value(addressModel.levelNumberEnd)=&value(addressModel.houseNumberAlphaStart)=&value(addressModel.houseNumberAlphaEnd)=&date(activityModel.actDueDate)=&value(capContactModel.userID)=&value(capContactModel.internalUserFlag)=&pageSizeR=5&maxIndex=5&firstIndex=0&",
		"LAST");

	web_url("refresh.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/reskin/refresh.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t270.inf", 
		"LAST");

	web_url("Drop_Menu_Button_Default.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/reskin/Drop_Menu_Button_Default.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t271.inf", 
		"LAST");

	web_submit_data("empty.jsp", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t272.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_url("jquery-1.11.0.min.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t273.inf", 
		"LAST");

	web_url("blank.gif", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/resources/blank.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t274.inf", 
		"LAST");

	web_url("hashMap.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t275.inf", 
		"LAST");

	web_url("ac360ui.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t276.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t277.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t278.inf", 
		"LAST");

	web_url("table-header-left-top-200-8.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/sky_blue/menu/table-header-left-top-200-8.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t279.inf", 
		"LAST");

	web_url("table-header-right-top-400-8.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/sky_blue/menu/table-header-right-top-400-8.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t280.inf", 
		"LAST");

	web_url("table-footer-left-bottom-200-12.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/sky_blue/menu/table-footer-left-bottom-200-12.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t281.inf", 
		"LAST");

	web_url("table-footer-right-bottom-400-12.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/sky_blue/menu/table-footer-right-bottom-400-12.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t282.inf", 
		"LAST");

	lr_end_transaction("TC1_4_Click_Record",2);

	lr_think_time(13);

	lr_start_transaction("TC1_5_Click_Search");

	web_url("session.do_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.c7ae1", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t283.inf", 
		"LAST");

	web_url("capSearch.do_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t284.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("Ac360ToolManager.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t285.inf", 
		"LAST");

	web_url("jquery-1.11.0.min.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t286.inf", 
		"LAST");

	web_url("popup.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/popup/popup.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t287.inf", 
		"LAST");

	web_url("myTask.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/myTask.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t288.inf", 
		"LAST");

	web_url("menubar.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/menubar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t289.inf", 
		"LAST");

	web_url("ac360base.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t290.inf", 
		"LAST");

	web_url("masked.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/masked.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t291.inf", 
		"LAST");

	web_url("memoryLeakPatch.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/memoryLeakPatch.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t292.inf", 
		"LAST");

	web_url("widget.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/widget/widget.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t293.inf", 
		"LAST");

	web_url("ac360.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t294.inf", 
		"LAST");

	web_url("ac360InputBoxHotKey.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360InputBoxHotKey.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t295.inf", 
		"LAST");

	web_url("opos.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/opos.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t296.inf", 
		"LAST");

	web_url("AAHELP.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/docs/AAHELP.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t297.inf", 
		"LAST");

	web_url("ajaxAnyWhere.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ajaxAnyWhere.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t298.inf", 
		"LAST");

	web_url("watermark.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/watermark.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t299.inf", 
		"LAST");

	web_url("spellchecker-caller.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/spellchecker/spellchecker-caller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t300.inf", 
		"LAST");

	web_url("dojo.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/dojo.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t301.inf", 
		"LAST");

	web_url("selectDate.gif", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/selectDate.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t302.inf", 
		"LAST");

	web_url("conditionselect.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/condition/conditionselect.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t303.inf", 
		"LAST");

	web_url("genericMask.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/taglib/genericMask/javascript/genericMask.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t304.inf", 
		"LAST");

	web_url("dojo412.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/datapicker/treePicker/js/dojo412.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t305.inf", 
		"LAST");

	web_url("permitPlus.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/permitPlus.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t306.inf", 
		"LAST");

	web_url("hashMap.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t307.inf", 
		"LAST");

	web_url("layoutPublic.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/layoutPublic.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t308.inf", 
		"LAST");

	web_url("dojo.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/dojo.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t309.inf", 
		"LAST");

	web_url("soundex.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/soundex.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t310.inf", 
		"LAST");

	web_url("ac360ui.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t311.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t312.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t313.inf", 
		"LAST");

	web_url("I18N.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t314.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t315.inf", 
		"LAST");

	web_url("checkTextAreaLength.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/checkTextAreaLength.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t316.inf", 
		"LAST");

	web_url("I18N.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t317.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t318.inf", 
		"LAST");

	web_url("I18N.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t319.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t320.inf", 
		"LAST");

	web_url("I18N.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t321.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t322.inf", 
		"LAST");

	web_url("blank.jsp_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t323.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("json.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/json.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t324.inf", 
		"LAST");

	web_url("ac360base.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t325.inf", 
		"LAST");

	web_url("AdapterRegistry.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/AdapterRegistry.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t326.inf", 
		"LAST");

	web_url("blank.jsp_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t327.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("jquery-1.11.0.min.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t328.inf", 
		"LAST");

	web_url("I18N.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t329.inf", 
		"LAST");

	web_url("hashMap.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t330.inf", 
		"LAST");

	web_url("ac360base.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t331.inf", 
		"LAST");

	web_url("calendar_medium.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/reskin/calendar_medium.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t332.inf", 
		"LAST");

	web_url("ac360ui.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t333.inf", 
		"LAST");

	web_url("jquery-1.11.0.min.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t334.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t335.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t336.inf", 
		"LAST");

	web_url("hashMap.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t337.inf", 
		"LAST");

	web_url("subdivisionLot.jsp", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/parcel/subdivisionLot.jsp?subdivision=&lotName=value(capParcelModel*lot)&lotValue=&autoGet=false&aaxmlrequest=true&aa_rand=0.25197568607330506&aazones=aazone-parcel-lot", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t338.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("Ac360ToolManager.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t339.inf", 
		"LAST");

	web_url("ac360ui.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t340.inf", 
		"LAST");

	web_url("I18N.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t341.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t342.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t343.inf", 
		"LAST");

	web_url("hashMap.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t344.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t345.inf", 
		"LAST");

	web_url("I18N.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t346.inf", 
		"LAST");

	lr_end_transaction("TC1_5_Click_Search",2);

	web_url("jsMessageResoruce.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t347.inf", 
		"LAST");

	web_url("I18N.js_13", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t348.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_13", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t349.inf", 
		"LAST");

	web_url("Tree.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/Tree.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t350.inf", 
		"LAST");

	web_url("fx.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/fx.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t351.inf", 
		"LAST");

	web_url("Toggler.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/fx/Toggler.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t352.inf", 
		"LAST");

	web_url("DeferredList.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/DeferredList.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t353.inf", 
		"LAST");

	web_url("_Widget.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_Widget.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t354.inf", 
		"LAST");

	web_url("_base.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t355.inf", 
		"LAST");

	web_url("focus.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/focus.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t356.inf", 
		"LAST");

	web_url("manager.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/manager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t357.inf", 
		"LAST");

	web_url("place.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/place.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t358.inf", 
		"LAST");

	web_url("AdapterRegistry.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/AdapterRegistry.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t359.inf", 
		"LAST");

	web_url("popup.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/popup.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t360.inf", 
		"LAST");

	web_url("window.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/window.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t361.inf", 
		"LAST");

	web_url("scroll.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/scroll.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t362.inf", 
		"LAST");

	web_url("sniff.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/sniff.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t363.inf", 
		"LAST");

	web_url("typematic.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/typematic.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t364.inf", 
		"LAST");

	web_url("wai.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/wai.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t365.inf", 
		"LAST");

	web_url("_Templated.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_Templated.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t366.inf", 
		"LAST");

	web_url("string.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/string.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t367.inf", 
		"LAST");

	web_url("parser.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/parser.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t368.inf", 
		"LAST");

	web_url("stamp.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/date/stamp.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t369.inf", 
		"LAST");

	web_url("cache.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/cache.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t370.inf", 
		"LAST");

	web_url("_Container.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_Container.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t371.inf", 
		"LAST");

	web_url("_Contained.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_Contained.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t372.inf", 
		"LAST");

	web_url("cookie.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/cookie.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t373.inf", 
		"LAST");

	web_url("regexp.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/regexp.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t374.inf", 
		"LAST");

	web_url("TreeStoreModel.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/tree/TreeStoreModel.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t375.inf", 
		"LAST");

	web_url("ForestStoreModel.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/tree/ForestStoreModel.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t376.inf", 
		"LAST");

	web_url("QueryReadStore.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojox/data/QueryReadStore.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t377.inf", 
		"LAST");

	web_url("sorter.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/data/util/sorter.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t378.inf", 
		"LAST");

	web_url("ArrayList.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojox/collections/ArrayList.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t379.inf", 
		"LAST");

	web_url("_base.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojox/collections/_base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t380.inf", 
		"LAST");

	web_url("ArrayList.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/collections/ArrayList.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t381.inf", 
		"LAST");

	web_url("Collections.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/collections/Collections.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t382.inf", 
		"LAST");

	web_url("formAjaxUtil.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/cap/formAjaxUtil.do?portlet_language=en_US&attriKey=capSearchForm&staffName=value(capDetailModel*closedBy)&userType=1&dept=&mode=getStaffsByDept", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t383.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("formAjaxUtil.do_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/cap/formAjaxUtil.do?portlet_language=en_US&attriKey=capSearchForm&staffName=value(capDetailModel*asgnStaff)&userType=1&dept=&mode=getStaffsByDept", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t384.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("formAjaxUtil.do_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/cap/formAjaxUtil.do?portlet_language=en_US&attriKey=capSearchForm&staffName=value(capDetailModel*completeStaff)&userType=1&dept=&mode=getStaffsByDept", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t385.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("formAjaxUtil.do_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/cap/formAjaxUtil.do?portlet_language=en_US&attriKey=capSearchForm&staffName=value(activityModel*assignedStaffID)&userType=1&dept=&mode=getStaffsByDept", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t386.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("formAjaxUtil.do_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/cap/formAjaxUtil.do?portlet_language=en_US&attriKey=capSearchForm&staffName=value(capDetailModel*inspectorName)&userType=1&dept=&mode=getStaffsByDept", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t387.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("formAjaxUtil.do_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/cap/formAjaxUtil.do?portlet_language=en_US&attriKey=capSearchForm&staffName=value(capDetailModel*enforceOfficerName)&userType=1&dept=&mode=getStaffsByDept", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t388.inf", 
		"Mode=HTTP", 
		"LAST");

	web_custom_request("costingList.do",
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/ams/workorder/costingList.do?mode=getCostItem4WOSearch&costType=&module=Building",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y",
		"Snapshot=t389.inf",
		"Mode=HTTP",
		"Body=TRANSACTION_TOKEN_KEY_FOR_CAPSEARCHFORM={TRANSACTION_TOKEN_KEY_FOR_CAPSEARCHFORM}&value(FirstEntryURL)=%2Fportlets%2Fcap%2FcapSearch.do%3Fmode%3Dsearch%26isFromSearch%3Dtrue%26isSearchButton%3Dtrue%26module%3DBuilding%26isGeneralCAP%3DY&value(CurrentEntryURL)=%2Fportlets%2Fcap%2FcapSearch.do%3Fmode%3Dsearch%26isFromSearch%3Dtrue%26isSearchButton%3Dtrue%26module%3DBuilding%26isGeneralCAP%3DY&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=search&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=115&exceptionLogID=&generalCAPSearch=&value(portlet_soundex)=off&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=115&sessionIdFromWindow=q0DRFTb9tIe7JGj-xD%2BPWAnC&listID=&printType=&checkBoxValue=&action=searchByCondition&mode=submit&isSearchedFlag=Y&value(clear)=&value(isFromAdmin)=&formSearchPage=Y&value(supportMulAgencySearch)=Y&selectAgencies=&selectModules=&value(capID)=&value(capDetailModel*shortNotes)=&value(srLevel)=&value(capGr"
		"oupIndex)=&value(capTypeModel*group)=&value(capTypeModel*type)=&value(capTypeModel*subType)=&value(capTypeModel*category)=&value(capTypeModel)=null%2Fnull%2Fnull%2Fnull&value(capDetailModel*priority)=&value(capContactModel*firstName)=&value(capContactModel*lastName)=&value(capContactModel*email)=&value(search_range_from_addressModel*houseNumberStart)=&value(search_range_to_addressModel*houseNumberStart)=&value(search_range_addressModel*houseNumberStart)=&value(search_range_from_addressModel*houseNumberEnd)=&value(search_range_to_addressModel*houseNumberEnd)=&value(search_range_addressModel*houseNumberEnd)=&value(addressModel*streetDirection)=&value(addressModel*streetName)=&value(addressModel*streetSuffix)=&value(addressModel*city)=&value(capDetailModel*reportedChannel)=&date(capModel*fileDate)=03%2F01%2F2017&date(capModel*endFileDate)=08%2F28%2F2017&value(capModel*capStatus)=&value(capModel*altID)=&value(capModel*specialText)=&date(capDetailModel*scheduledDate)=&date(capDetailModel*endScheduledDate)=&value"
		"(capDetailModel*asgnDept)=&value(capDetailModel*completeDept)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedDept)=&value(capDetailModel*asgnStaff)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedBy)=&date(capDetailModel*asgnDate)=&date(capDetailModel*endAsgnDate)=&date(capDetailModel*completeDate)=&date(capDetailModel*endCompleteDate)=&date(capDetailModel*closedDate)=&date(capDetailModel*endClosedDate)=&value(b1ExpirationModel*expStatus)=&value(search_range_b1ExpirationModel*expDate)=&date(search_range_from_b1ExpirationModel*expDate)=&date(search_range_to_b1ExpirationModel*expDate)=&value(capDetailModel*creatorDept)=&value(addressModel*XCoordinator)=&value(addressModel*XCoordinatorEnd)=&value(addressModel*YCoordinator)=&value(addressModel*YCoordinatorEnd)=&value(capModel*moduleName)=&date(capModel*reportedDate)=&date(capModel*endReportedDate)=&value(capModel*createdByACA)=&value(search_range_capDetailModel*pmScheduleSeq)=&value(search_range_from_capDetailModel*pmScheduleSeq)"
		"=&value(search_range_to_capDetailModel*pmScheduleSeq)=&value(capContactModel*contactType)=&value(capContactModel*businessName)=&value(capContactModel*relation)=&value(addressModel*unitType)=&value(addressModel*unitStart)=&value(addressModel*unitEnd)=&value(addressModel*state)=&value(addressModel*zip)=&value(licenseProfessionalModel*licensenbr)=&value(licenseProfessionalModel*licensetype)=&value(licenseProfessionalModel*businessName)=&value(licenseProfessionalModel*contactFirstName)=&value(licenseProfessionalModel*contactLastName)=&value(capOwnerModel*ownerFullName)=&value(capParcelModel*block)=&value(capParcelModel*lot)=&value(capParcelModel*parcelNumber)=&value(structureModel*structureType)=&value(structureModel*structureName)=&value(structureModel*structureStatus)=&date(structureModel*structureStatusDate)=&date(structureModel*structureStatusEndDate)=&value(sectionTownShipRangeModel*section)=&value(sectionTownShipRangeModel*townShip)=&value(sectionTownShipRangeModel*range)=&value(sectionTownShipRangeModel*"
		"plssType)=&value(sectionTownShipRangeModel*entityCode)=&value(historyTaskItemModel*taskDescription)=&value(historyTaskItemModel*disposition)=&date(historyTaskItemModel*dispositionDate)=&date(historyTaskItemModel*dispositionEndDate)=&value(taskItemModel*taskDescription)=&value(taskItemModel*disposition)=&date(taskItemModel*statusDate)=&date(taskItemModel*statusEndDate)=&value(capWorkDescriptionModel*description)=&value(addressModel*addressDescription)=&value(search_range_capDetailModel*estProdUnits)=&value(search_range_from_capDetailModel*estProdUnits)=&value(search_range_to_capDetailModel*estProdUnits)=&value(search_range_capDetailModel*actualProdUnits)=&value(search_range_from_capDetailModel*actualProdUnits)=&value(search_range_to_capDetailModel*actualProdUnits)=&value(search_range_capDetailModel*estCostPerUnit)=&value(search_range_from_capDetailModel*estCostPerUnit)=&value(search_range_to_capDetailModel*estCostPerUnit)=&value(search_range_capDetailModel*costPerUnit)=&value(search_range_from_capDetailModel"
		"*costPerUnit)=&value(search_range_to_capDetailModel*costPerUnit)=&value(search_range_capDetailModel*estJobCost)=&value(search_range_from_capDetailModel*estJobCost)=&value(search_range_to_capDetailModel*estJobCost)=&value(search_range_capDetailModel*totalJobCost)=&value(search_range_from_capDetailModel*totalJobCost)=&value(search_range_to_capDetailModel*totalJobCost)=&value(capInfo)=ALL&value(appSpecInfoModel*checkboxDesc)=&value(appSpecInfoModel*checklistComment)=&value(capParcelModel*subdivision)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&date(capDetailModel*appearanceEndDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*"
		"offnWitnessedFlag)=&value(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(addressModel*houseNumberRangeStart)=&value(addressModel*houseNumberRangeEnd)=&value(capModel*source)=&value(setIdInCap)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&date(capDetailModel*endFirstIssuedDate)=&value(capModel*receiptNumber)=&value(addressModel*refAddressType)=&value(addressModel*addressLine1)=&value(addressModel*addressLine2)=&value(capContactModel*salutation)=&value(capContactModel*gender)=&value(capContactModel*postOfficeBox)=&date(capContactModel*birthDate)=&value(licenseProfessionalModel*salutation)=&value(licenseProfessionalModel*gender)=&value(licenseProfessionalModel*postOfficeBox)=&value(licenseProfessionalModel*busName2)=&date(licenseProfessionalModel*birthDate)=&value(licenseProfessionalModel*countryCode)=&value(costingModel*costingCostType)=&value(costingModel*costingCostItem)=&date(costingModel*costingCostDate)=&date(costingModel*costingCostDateTo)=&val"
		"ue(partModel*partNumber)=&value(partModel*partBrand)=&value(partModel*partType)=&value(partModel*partDescription)=&date(partModel*transactionDateFrom)=&date(partModel*transactionDateTo)=&value(partModel*locationSeq)=&value(assetMasterModel*g1AssetGroup)=&value(assetMasterModel*g1AssetType)=&value(assetMasterModel*g1AssetID)=&value(assetMasterModel*g1ClassType)=&value(assetMasterModel*g1Description)=&value(assetAttributeModel*r1AttributeLabel)=&value(assetAttributeModel*r1AttributeValue)=&value(search_range_capDetailModel*undistributedCost)=&value(search_range_from_capDetailModel*undistributedCost)=&value(search_range_to_capDetailModel*undistributedCost)=&value(licenseProfessionalModel*businessLicense)=&value(taskSpecInfoModel*checkboxDesc)=&value(taskSpecInfoModel*checklistComment)=&value(capContactModel*maskedSsn)=&value(maskformat_capContactModel*maskedSsn)=AAA-AA-AAAA&value(appSpecInfoTableModel*checkboxDesc)=&value(appSpecInfoTableModel*checklistComment)=&value(capContactModel*fein)=&value(maskformat_ca"
		"pContactModel*fein)=%23%23%23%23-%23%23-%23%23%23%23&value(addressModel*houseFractionStart)=&value(addressModel*houseFractionEnd)=&value(parcelModel*legalDesc)=&value(capModel*checkNbr)=&value(capContactModel*addressLine1)=&value(capContactModel*addressLine2)=&value(capContactModel*addressLine3)=&value(capContactModel*city)=&value(capContactModel*zip_disp)=&value(capContactModel*zip)=&value(capContactModel*countryCode)=&value(capContactModel*state)=&value(capModel*trackingNbr)=&value(capModel*acctID)=&value(activityModel*activityName)=&date(activityModel*actDate)=&date(activityModel*actEndDate)=&value(activityModel*activityDescription)=&value(activityModel*activityType)=&value(activityModel*assignedDeptNumber)=&value(activityModel*assignedStaffID)=&value(capContactModel*fullName)=&value(setNameInCap)=&value(capConditionModel*conditionDescription)=&value(capConditionModel*impactCode)=&value(capConditionModel*conditionOfApproval)=false&isDailyCondition=YES&value(capConditionModel*conditionStatusAndTypeValue)="
		"&date(capConditionModel*statusDate)=&date(capConditionModel*endStatusDate)=&value(addressModel*levelPrefix)=&value(addressModel*levelNumberStart)=&value(addressModel*levelNumberEnd)=&value(addressModel*houseNumberAlphaStart)=&value(addressModel*houseNumberAlphaEnd)=&date(activityModel*actDueDate)=&date(activityModel*actDueDateTo)=&value(capDetailModel*generatedByCloning)=&value(capModel*pendingValidation)=&value(addressModel*locationType)=&value(addressModel*streetNameStart)=&value(addressModel*streetNameEnd)=&value(addressModel*crossStreetNameStart)=&value(addressModel*crossStreetNameEnd)=&isNewSearch=true&isSearchAble=true&template_ADDRESS_EVENT_START_DATE=&template_ADDRESS_EVENT_END_DATE=&template_ADDRESS_MONTH=&template_ADDRESS_FIELD1=&template_ADDRESS_FIELD2=&isSearchAble=true&isSearchAble=true&template_PARCEL_ROWM_END_DATE=&template_PARCEL_ROWM_START_DATE=&value(addressModel*streetSuffixdirection)=&value(capContactModel*userID)=&value(capContactModel*internalUserFlag)=&",
		"LAST");

	web_custom_request("dataList.do",
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/ams/asset/dataList.do?mode=getAssetType4WOSearch&assetGroup=&module=Building",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y",
		"Snapshot=t390.inf",
		"Mode=HTTP",
		"Body=TRANSACTION_TOKEN_KEY_FOR_CAPSEARCHFORM={TRANSACTION_TOKEN_KEY_FOR_CAPSEARCHFORM}&value(FirstEntryURL)=%2Fportlets%2Fcap%2FcapSearch.do%3Fmode%3Dsearch%26isFromSearch%3Dtrue%26isSearchButton%3Dtrue%26module%3DBuilding%26isGeneralCAP%3DY&value(CurrentEntryURL)=%2Fportlets%2Fcap%2FcapSearch.do%3Fmode%3Dsearch%26isFromSearch%3Dtrue%26isSearchButton%3Dtrue%26module%3DBuilding%26isGeneralCAP%3DY&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=search&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=115&exceptionLogID=&generalCAPSearch=&value(portlet_soundex)=off&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=115&sessionIdFromWindow=q0DRFTb9tIe7JGj-xD%2BPWAnC&listID=&printType=&checkBoxValue=&action=searchByCondition&mode=submit&isSearchedFlag=Y&value(clear)=&value(isFromAdmin)=&formSearchPage=Y&value(supportMulAgencySearch)=Y&selectAgencies=&selectModules=&value(capID)=&value(capDetailModel*shortNotes)=&value(srLevel)=&value(capGr"
		"oupIndex)=&value(capTypeModel*group)=&value(capTypeModel*type)=&value(capTypeModel*subType)=&value(capTypeModel*category)=&value(capTypeModel)=null%2Fnull%2Fnull%2Fnull&value(capDetailModel*priority)=&value(capContactModel*firstName)=&value(capContactModel*lastName)=&value(capContactModel*email)=&value(search_range_from_addressModel*houseNumberStart)=&value(search_range_to_addressModel*houseNumberStart)=&value(search_range_addressModel*houseNumberStart)=&value(search_range_from_addressModel*houseNumberEnd)=&value(search_range_to_addressModel*houseNumberEnd)=&value(search_range_addressModel*houseNumberEnd)=&value(addressModel*streetDirection)=&value(addressModel*streetName)=&value(addressModel*streetSuffix)=&value(addressModel*city)=&value(capDetailModel*reportedChannel)=&date(capModel*fileDate)=03%2F01%2F2017&date(capModel*endFileDate)=08%2F28%2F2017&value(capModel*capStatus)=&value(capModel*altID)=&value(capModel*specialText)=&date(capDetailModel*scheduledDate)=&date(capDetailModel*endScheduledDate)=&value"
		"(capDetailModel*asgnDept)=&value(capDetailModel*completeDept)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedDept)=&value(capDetailModel*asgnStaff)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedBy)=&date(capDetailModel*asgnDate)=&date(capDetailModel*endAsgnDate)=&date(capDetailModel*completeDate)=&date(capDetailModel*endCompleteDate)=&date(capDetailModel*closedDate)=&date(capDetailModel*endClosedDate)=&value(b1ExpirationModel*expStatus)=&value(search_range_b1ExpirationModel*expDate)=&date(search_range_from_b1ExpirationModel*expDate)=&date(search_range_to_b1ExpirationModel*expDate)=&value(capDetailModel*creatorDept)=&value(addressModel*XCoordinator)=&value(addressModel*XCoordinatorEnd)=&value(addressModel*YCoordinator)=&value(addressModel*YCoordinatorEnd)=&value(capModel*moduleName)=&date(capModel*reportedDate)=&date(capModel*endReportedDate)=&value(capModel*createdByACA)=&value(search_range_capDetailModel*pmScheduleSeq)=&value(search_range_from_capDetailModel*pmScheduleSeq)"
		"=&value(search_range_to_capDetailModel*pmScheduleSeq)=&value(capContactModel*contactType)=&value(capContactModel*businessName)=&value(capContactModel*relation)=&value(addressModel*unitType)=&value(addressModel*unitStart)=&value(addressModel*unitEnd)=&value(addressModel*state)=&value(addressModel*zip)=&value(licenseProfessionalModel*licensenbr)=&value(licenseProfessionalModel*licensetype)=&value(licenseProfessionalModel*businessName)=&value(licenseProfessionalModel*contactFirstName)=&value(licenseProfessionalModel*contactLastName)=&value(capOwnerModel*ownerFullName)=&value(capParcelModel*block)=&value(capParcelModel*lot)=&value(capParcelModel*parcelNumber)=&value(structureModel*structureType)=&value(structureModel*structureName)=&value(structureModel*structureStatus)=&date(structureModel*structureStatusDate)=&date(structureModel*structureStatusEndDate)=&value(sectionTownShipRangeModel*section)=&value(sectionTownShipRangeModel*townShip)=&value(sectionTownShipRangeModel*range)=&value(sectionTownShipRangeModel*"
		"plssType)=&value(sectionTownShipRangeModel*entityCode)=&value(historyTaskItemModel*taskDescription)=&value(historyTaskItemModel*disposition)=&date(historyTaskItemModel*dispositionDate)=&date(historyTaskItemModel*dispositionEndDate)=&value(taskItemModel*taskDescription)=&value(taskItemModel*disposition)=&date(taskItemModel*statusDate)=&date(taskItemModel*statusEndDate)=&value(capWorkDescriptionModel*description)=&value(addressModel*addressDescription)=&value(search_range_capDetailModel*estProdUnits)=&value(search_range_from_capDetailModel*estProdUnits)=&value(search_range_to_capDetailModel*estProdUnits)=&value(search_range_capDetailModel*actualProdUnits)=&value(search_range_from_capDetailModel*actualProdUnits)=&value(search_range_to_capDetailModel*actualProdUnits)=&value(search_range_capDetailModel*estCostPerUnit)=&value(search_range_from_capDetailModel*estCostPerUnit)=&value(search_range_to_capDetailModel*estCostPerUnit)=&value(search_range_capDetailModel*costPerUnit)=&value(search_range_from_capDetailModel"
		"*costPerUnit)=&value(search_range_to_capDetailModel*costPerUnit)=&value(search_range_capDetailModel*estJobCost)=&value(search_range_from_capDetailModel*estJobCost)=&value(search_range_to_capDetailModel*estJobCost)=&value(search_range_capDetailModel*totalJobCost)=&value(search_range_from_capDetailModel*totalJobCost)=&value(search_range_to_capDetailModel*totalJobCost)=&value(capInfo)=ALL&value(appSpecInfoModel*checkboxDesc)=&value(appSpecInfoModel*checklistComment)=&value(capParcelModel*subdivision)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&date(capDetailModel*appearanceEndDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*"
		"offnWitnessedFlag)=&value(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(addressModel*houseNumberRangeStart)=&value(addressModel*houseNumberRangeEnd)=&value(capModel*source)=&value(setIdInCap)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&date(capDetailModel*endFirstIssuedDate)=&value(capModel*receiptNumber)=&value(addressModel*refAddressType)=&value(addressModel*addressLine1)=&value(addressModel*addressLine2)=&value(capContactModel*salutation)=&value(capContactModel*gender)=&value(capContactModel*postOfficeBox)=&date(capContactModel*birthDate)=&value(licenseProfessionalModel*salutation)=&value(licenseProfessionalModel*gender)=&value(licenseProfessionalModel*postOfficeBox)=&value(licenseProfessionalModel*busName2)=&date(licenseProfessionalModel*birthDate)=&value(licenseProfessionalModel*countryCode)=&value(costingModel*costingCostType)=&value(costingModel*costingCostItem)=&date(costingModel*costingCostDate)=&date(costingModel*costingCostDateTo)=&val"
		"ue(partModel*partNumber)=&value(partModel*partBrand)=&value(partModel*partType)=&value(partModel*partDescription)=&date(partModel*transactionDateFrom)=&date(partModel*transactionDateTo)=&value(partModel*locationSeq)=&value(assetMasterModel*g1AssetGroup)=&value(assetMasterModel*g1AssetType)=&value(assetMasterModel*g1AssetID)=&value(assetMasterModel*g1ClassType)=&value(assetMasterModel*g1Description)=&value(assetAttributeModel*r1AttributeLabel)=&value(assetAttributeModel*r1AttributeValue)=&value(search_range_capDetailModel*undistributedCost)=&value(search_range_from_capDetailModel*undistributedCost)=&value(search_range_to_capDetailModel*undistributedCost)=&value(licenseProfessionalModel*businessLicense)=&value(taskSpecInfoModel*checkboxDesc)=&value(taskSpecInfoModel*checklistComment)=&value(capContactModel*maskedSsn)=&value(maskformat_capContactModel*maskedSsn)=AAA-AA-AAAA&value(appSpecInfoTableModel*checkboxDesc)=&value(appSpecInfoTableModel*checklistComment)=&value(capContactModel*fein)=&value(maskformat_ca"
		"pContactModel*fein)=%23%23%23%23-%23%23-%23%23%23%23&value(addressModel*houseFractionStart)=&value(addressModel*houseFractionEnd)=&value(parcelModel*legalDesc)=&value(capModel*checkNbr)=&value(capContactModel*addressLine1)=&value(capContactModel*addressLine2)=&value(capContactModel*addressLine3)=&value(capContactModel*city)=&value(capContactModel*zip_disp)=&value(capContactModel*zip)=&value(capContactModel*countryCode)=&value(capContactModel*state)=&value(capModel*trackingNbr)=&value(capModel*acctID)=&value(activityModel*activityName)=&date(activityModel*actDate)=&date(activityModel*actEndDate)=&value(activityModel*activityDescription)=&value(activityModel*activityType)=&value(activityModel*assignedDeptNumber)=&value(activityModel*assignedStaffID)=&value(capContactModel*fullName)=&value(setNameInCap)=&value(capConditionModel*conditionDescription)=&value(capConditionModel*impactCode)=&value(capConditionModel*conditionOfApproval)=false&isDailyCondition=YES&value(capConditionModel*conditionStatusAndTypeValue)="
		"&date(capConditionModel*statusDate)=&date(capConditionModel*endStatusDate)=&value(addressModel*levelPrefix)=&value(addressModel*levelNumberStart)=&value(addressModel*levelNumberEnd)=&value(addressModel*houseNumberAlphaStart)=&value(addressModel*houseNumberAlphaEnd)=&date(activityModel*actDueDate)=&date(activityModel*actDueDateTo)=&value(capDetailModel*generatedByCloning)=&value(capModel*pendingValidation)=&value(addressModel*locationType)=&value(addressModel*streetNameStart)=&value(addressModel*streetNameEnd)=&value(addressModel*crossStreetNameStart)=&value(addressModel*crossStreetNameEnd)=&isNewSearch=true&isSearchAble=true&template_ADDRESS_EVENT_START_DATE=&template_ADDRESS_EVENT_END_DATE=&template_ADDRESS_MONTH=&template_ADDRESS_FIELD1=&template_ADDRESS_FIELD2=&isSearchAble=true&isSearchAble=true&template_PARCEL_ROWM_END_DATE=&template_PARCEL_ROWM_START_DATE=&value(addressModel*streetSuffixdirection)=&value(capContactModel*userID)=&value(capContactModel*internalUserFlag)=&",
		"LAST");

	web_url("Map.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Map.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t391.inf", 
		"LAST");

	web_submit_data("empty.jsp_2", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t392.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_url("base64.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/base64.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t393.inf", 
		"LAST");

	web_submit_data("regionalSyncMask.do", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t394.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_2", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t395.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_3", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&getMsg=Y", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t396.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	lr_think_time(11);

	lr_start_transaction("TC1_6_Search_Record");

	web_url("session.do_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.c7ae1", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t397.inf", 
		"LAST");

	web_submit_data("capSearch.do_3",
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y",
		"Snapshot=t398.inf",
		"Mode=HTTP",
		"ITEMDATA",
		"Name=TRANSACTION_TOKEN_KEY_FOR_CAPSEARCHFORM", "Value={TRANSACTION_TOKEN_KEY_FOR_CAPSEARCHFORM}", "ENDITEM",
		"Name=value(FirstEntryURL)", "Value=/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", "ENDITEM",
		"Name=value(CurrentEntryURL)", "Value=/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", "ENDITEM",
		"Name=portlet_language", "Value=en_US", "ENDITEM",
		"Name=refresh_target", "Value=", "ENDITEM",
		"Name=refresh_url", "Value=", "ENDITEM",
		"Name=buttonName", "Value=", "ENDITEM",
		"Name=modeName", "Value=search", "ENDITEM",
		"Name=module", "Value=Building", "ENDITEM",
		"Name=accelasubmitbuttonname", "Value=submit", "ENDITEM",
		"Name=itemName", "Value=", "ENDITEM",
		"Name=CurrentViewID", "Value=115", "ENDITEM",
		"Name=exceptionLogID", "Value=", "ENDITEM",
		"Name=generalCAPSearch", "Value=", "ENDITEM",
		"Name=value(portlet_soundex)", "Value=off", "ENDITEM",
		"Name=isGeneralCAP", "Value=Y", "ENDITEM",
		"Name=objectName", "Value=", "ENDITEM",
		"Name=CheckBoxName", "Value=", "ENDITEM",
		"Name=MaxNumber", "Value=", "ENDITEM",
		"Name=ExportFileType", "Value=print", "ENDITEM",
		"Name=CurrentViewID", "Value=115", "ENDITEM",
		"Name=sessionIdFromWindow", "Value=q0DRFTb9tIe7JGj-xD+PWAnC", "ENDITEM",
		"Name=listID", "Value=", "ENDITEM",
		"Name=printType", "Value=", "ENDITEM",
		"Name=checkBoxValue", "Value=", "ENDITEM",
		"Name=action", "Value=", "ENDITEM",
		"Name=mode", "Value=submit", "ENDITEM",
		"Name=isSearchedFlag", "Value=Y", "ENDITEM",
		"Name=value(clear)", "Value=", "ENDITEM",
		"Name=value(isFromAdmin)", "Value=", "ENDITEM",
		"Name=formSearchPage", "Value=Y", "ENDITEM",
		"Name=value(supportMulAgencySearch)", "Value=Y", "ENDITEM",
		"Name=selectAgencies", "Value=", "ENDITEM",
		"Name=selectModules", "Value=", "ENDITEM",
		"Name=value(capID)", "Value=17BLD-00000-00100", "ENDITEM",
		"Name=value(capDetailModel*shortNotes)", "Value=", "ENDITEM",
		"Name=value(srLevel)", "Value=", "ENDITEM",
		"Name=value(capGroupIndex)", "Value=", "ENDITEM",
		"Name=value(capTypeModel*group)", "Value=", "ENDITEM",
		"Name=value(capTypeModel*type)", "Value=", "ENDITEM",
		"Name=value(capTypeModel*subType)", "Value=", "ENDITEM",
		"Name=value(capTypeModel*category)", "Value=", "ENDITEM",
		"Name=value(capTypeModel)", "Value=null/null/null/null", "ENDITEM",
		"Name=value(capDetailModel*priority)", "Value=", "ENDITEM",
		"Name=value(capContactModel*firstName)", "Value=", "ENDITEM",
		"Name=value(capContactModel*lastName)", "Value=", "ENDITEM",
		"Name=value(capContactModel*email)", "Value=", "ENDITEM",
		"Name=value(search_range_from_addressModel*houseNumberStart)", "Value=", "ENDITEM",
		"Name=value(search_range_to_addressModel*houseNumberStart)", "Value=", "ENDITEM",
		"Name=value(search_range_addressModel*houseNumberStart)", "Value=", "ENDITEM",
		"Name=value(search_range_from_addressModel*houseNumberEnd)", "Value=", "ENDITEM",
		"Name=value(search_range_to_addressModel*houseNumberEnd)", "Value=", "ENDITEM",
		"Name=value(search_range_addressModel*houseNumberEnd)", "Value=", "ENDITEM",
		"Name=value(addressModel*streetDirection)", "Value=", "ENDITEM",
		"Name=value(addressModel*streetName)", "Value=", "ENDITEM",
		"Name=value(addressModel*streetSuffix)", "Value=", "ENDITEM",
		"Name=value(addressModel*city)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*reportedChannel)", "Value=", "ENDITEM",
		"Name=date(capModel*fileDate)", "Value=03/01/2017", "ENDITEM",
		"Name=date(capModel*endFileDate)", "Value=08/28/2017", "ENDITEM",
		"Name=value(capModel*capStatus)", "Value=", "ENDITEM",
		"Name=value(capModel*altID)", "Value=", "ENDITEM",
		"Name=value(capModel*specialText)", "Value=", "ENDITEM",
		"Name=date(capDetailModel*scheduledDate)", "Value=", "ENDITEM",
		"Name=date(capDetailModel*endScheduledDate)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*asgnDept)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*completeDept)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*closedDept)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*closedDept)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*asgnStaff)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*completeStaff)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*closedBy)", "Value=", "ENDITEM",
		"Name=date(capDetailModel*asgnDate)", "Value=", "ENDITEM",
		"Name=date(capDetailModel*endAsgnDate)", "Value=", "ENDITEM",
		"Name=date(capDetailModel*completeDate)", "Value=", "ENDITEM",
		"Name=date(capDetailModel*endCompleteDate)", "Value=", "ENDITEM",
		"Name=date(capDetailModel*closedDate)", "Value=", "ENDITEM",
		"Name=date(capDetailModel*endClosedDate)", "Value=", "ENDITEM",
		"Name=value(b1ExpirationModel*expStatus)", "Value=", "ENDITEM",
		"Name=value(search_range_b1ExpirationModel*expDate)", "Value=", "ENDITEM",
		"Name=date(search_range_from_b1ExpirationModel*expDate)", "Value=", "ENDITEM",
		"Name=date(search_range_to_b1ExpirationModel*expDate)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*creatorDept)", "Value=", "ENDITEM",
		"Name=value(addressModel*XCoordinator)", "Value=", "ENDITEM",
		"Name=value(addressModel*XCoordinatorEnd)", "Value=", "ENDITEM",
		"Name=value(addressModel*YCoordinator)", "Value=", "ENDITEM",
		"Name=value(addressModel*YCoordinatorEnd)", "Value=", "ENDITEM",
		"Name=value(capModel*moduleName)", "Value=", "ENDITEM",
		"Name=date(capModel*reportedDate)", "Value=", "ENDITEM",
		"Name=date(capModel*endReportedDate)", "Value=", "ENDITEM",
		"Name=value(capModel*createdByACA)", "Value=", "ENDITEM",
		"Name=value(search_range_capDetailModel*pmScheduleSeq)", "Value=", "ENDITEM",
		"Name=value(search_range_from_capDetailModel*pmScheduleSeq)", "Value=", "ENDITEM",
		"Name=value(search_range_to_capDetailModel*pmScheduleSeq)", "Value=", "ENDITEM",
		"Name=value(capContactModel*contactType)", "Value=", "ENDITEM",
		"Name=value(capContactModel*businessName)", "Value=", "ENDITEM",
		"Name=value(capContactModel*relation)", "Value=", "ENDITEM",
		"Name=value(addressModel*unitType)", "Value=", "ENDITEM",
		"Name=value(addressModel*unitStart)", "Value=", "ENDITEM",
		"Name=value(addressModel*unitEnd)", "Value=", "ENDITEM",
		"Name=value(addressModel*state)", "Value=", "ENDITEM",
		"Name=value(addressModel*zip)", "Value=", "ENDITEM",
		"Name=value(licenseProfessionalModel*licensenbr)", "Value=", "ENDITEM",
		"Name=value(licenseProfessionalModel*licensetype)", "Value=", "ENDITEM",
		"Name=value(licenseProfessionalModel*businessName)", "Value=", "ENDITEM",
		"Name=value(licenseProfessionalModel*contactFirstName)", "Value=", "ENDITEM",
		"Name=value(licenseProfessionalModel*contactLastName)", "Value=", "ENDITEM",
		"Name=value(capOwnerModel*ownerFullName)", "Value=", "ENDITEM",
		"Name=value(capParcelModel*block)", "Value=", "ENDITEM",
		"Name=value(capParcelModel*lot)", "Value=", "ENDITEM",
		"Name=value(capParcelModel*parcelNumber)", "Value=", "ENDITEM",
		"Name=value(structureModel*structureType)", "Value=", "ENDITEM",
		"Name=value(structureModel*structureName)", "Value=", "ENDITEM",
		"Name=value(structureModel*structureStatus)", "Value=", "ENDITEM",
		"Name=date(structureModel*structureStatusDate)", "Value=", "ENDITEM",
		"Name=date(structureModel*structureStatusEndDate)", "Value=", "ENDITEM",
		"Name=value(sectionTownShipRangeModel*section)", "Value=", "ENDITEM",
		"Name=value(sectionTownShipRangeModel*townShip)", "Value=", "ENDITEM",
		"Name=value(sectionTownShipRangeModel*range)", "Value=", "ENDITEM",
		"Name=value(sectionTownShipRangeModel*plssType)", "Value=", "ENDITEM",
		"Name=value(sectionTownShipRangeModel*entityCode)", "Value=", "ENDITEM",
		"Name=value(historyTaskItemModel*taskDescription)", "Value=", "ENDITEM",
		"Name=value(historyTaskItemModel*disposition)", "Value=", "ENDITEM",
		"Name=date(historyTaskItemModel*dispositionDate)", "Value=", "ENDITEM",
		"Name=date(historyTaskItemModel*dispositionEndDate)", "Value=", "ENDITEM",
		"Name=value(taskItemModel*taskDescription)", "Value=", "ENDITEM",
		"Name=value(taskItemModel*disposition)", "Value=", "ENDITEM",
		"Name=date(taskItemModel*statusDate)", "Value=", "ENDITEM",
		"Name=date(taskItemModel*statusEndDate)", "Value=", "ENDITEM",
		"Name=value(capWorkDescriptionModel*description)", "Value=", "ENDITEM",
		"Name=value(addressModel*addressDescription)", "Value=", "ENDITEM",
		"Name=value(search_range_capDetailModel*estProdUnits)", "Value=", "ENDITEM",
		"Name=value(search_range_from_capDetailModel*estProdUnits)", "Value=", "ENDITEM",
		"Name=value(search_range_to_capDetailModel*estProdUnits)", "Value=", "ENDITEM",
		"Name=value(search_range_capDetailModel*actualProdUnits)", "Value=", "ENDITEM",
		"Name=value(search_range_from_capDetailModel*actualProdUnits)", "Value=", "ENDITEM",
		"Name=value(search_range_to_capDetailModel*actualProdUnits)", "Value=", "ENDITEM",
		"Name=value(search_range_capDetailModel*estCostPerUnit)", "Value=", "ENDITEM",
		"Name=value(search_range_from_capDetailModel*estCostPerUnit)", "Value=", "ENDITEM",
		"Name=value(search_range_to_capDetailModel*estCostPerUnit)", "Value=", "ENDITEM",
		"Name=value(search_range_capDetailModel*costPerUnit)", "Value=", "ENDITEM",
		"Name=value(search_range_from_capDetailModel*costPerUnit)", "Value=", "ENDITEM",
		"Name=value(search_range_to_capDetailModel*costPerUnit)", "Value=", "ENDITEM",
		"Name=value(search_range_capDetailModel*estJobCost)", "Value=", "ENDITEM",
		"Name=value(search_range_from_capDetailModel*estJobCost)", "Value=", "ENDITEM",
		"Name=value(search_range_to_capDetailModel*estJobCost)", "Value=", "ENDITEM",
		"Name=value(search_range_capDetailModel*totalJobCost)", "Value=", "ENDITEM",
		"Name=value(search_range_from_capDetailModel*totalJobCost)", "Value=", "ENDITEM",
		"Name=value(search_range_to_capDetailModel*totalJobCost)", "Value=", "ENDITEM",
		"Name=value(capInfo)", "Value=ALL", "ENDITEM",
		"Name=value(appSpecInfoModel*checkboxDesc)", "Value=", "ENDITEM",
		"Name=value(appSpecInfoModel*checklistComment)", "Value=", "ENDITEM",
		"Name=value(capParcelModel*subdivision)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*anonymousFlag)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*referenceType)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*enforceDept)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*enforceOfficerName)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*enforceOfficerId)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*inspectorDept)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*inspectorName)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*inspectorId)", "Value=", "ENDITEM",
		"Name=date(capDetailModel*appearanceDate)", "Value=", "ENDITEM",
		"Name=date(capDetailModel*appearanceEndDate)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*appearanceDayOfWeek)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*infractionFlag)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*misdemeanorFlag)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*offnWitnessedFlag)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*dfndtSignatureFlag)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*bookingFlag)", "Value=", "ENDITEM",
		"Name=value(addressModel*houseNumberRangeStart)", "Value=", "ENDITEM",
		"Name=value(addressModel*houseNumberRangeEnd)", "Value=", "ENDITEM",
		"Name=value(capModel*source)", "Value=", "ENDITEM",
		"Name=value(setIdInCap)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*statusReason)", "Value=", "ENDITEM",
		"Name=date(capDetailModel*firstIssuedDate)", "Value=", "ENDITEM",
		"Name=date(capDetailModel*endFirstIssuedDate)", "Value=", "ENDITEM",
		"Name=value(capModel*receiptNumber)", "Value=", "ENDITEM",
		"Name=value(addressModel*refAddressType)", "Value=", "ENDITEM",
		"Name=value(addressModel*addressLine1)", "Value=", "ENDITEM",
		"Name=value(addressModel*addressLine2)", "Value=", "ENDITEM",
		"Name=value(capContactModel*salutation)", "Value=", "ENDITEM",
		"Name=value(capContactModel*gender)", "Value=", "ENDITEM",
		"Name=value(capContactModel*postOfficeBox)", "Value=", "ENDITEM",
		"Name=date(capContactModel*birthDate)", "Value=", "ENDITEM",
		"Name=value(licenseProfessionalModel*salutation)", "Value=", "ENDITEM",
		"Name=value(licenseProfessionalModel*gender)", "Value=", "ENDITEM",
		"Name=value(licenseProfessionalModel*postOfficeBox)", "Value=", "ENDITEM",
		"Name=value(licenseProfessionalModel*busName2)", "Value=", "ENDITEM",
		"Name=date(licenseProfessionalModel*birthDate)", "Value=", "ENDITEM",
		"Name=value(licenseProfessionalModel*countryCode)", "Value=", "ENDITEM",
		"Name=value(costingModel*costingCostType)", "Value=", "ENDITEM",
		"Name=value(costingModel*costingCostItem)", "Value=", "ENDITEM",
		"Name=date(costingModel*costingCostDate)", "Value=", "ENDITEM",
		"Name=date(costingModel*costingCostDateTo)", "Value=", "ENDITEM",
		"Name=value(partModel*partNumber)", "Value=", "ENDITEM",
		"Name=value(partModel*partBrand)", "Value=", "ENDITEM",
		"Name=value(partModel*partType)", "Value=", "ENDITEM",
		"Name=value(partModel*partDescription)", "Value=", "ENDITEM",
		"Name=date(partModel*transactionDateFrom)", "Value=", "ENDITEM",
		"Name=date(partModel*transactionDateTo)", "Value=", "ENDITEM",
		"Name=value(partModel*locationSeq)", "Value=", "ENDITEM",
		"Name=value(assetMasterModel*g1AssetGroup)", "Value=", "ENDITEM",
		"Name=value(assetMasterModel*g1AssetType)", "Value=", "ENDITEM",
		"Name=value(assetMasterModel*g1AssetID)", "Value=", "ENDITEM",
		"Name=value(assetMasterModel*g1ClassType)", "Value=", "ENDITEM",
		"Name=value(assetMasterModel*g1Description)", "Value=", "ENDITEM",
		"Name=value(assetAttributeModel*r1AttributeLabel)", "Value=", "ENDITEM",
		"Name=value(assetAttributeModel*r1AttributeValue)", "Value=", "ENDITEM",
		"Name=value(search_range_capDetailModel*undistributedCost)", "Value=", "ENDITEM",
		"Name=value(search_range_from_capDetailModel*undistributedCost)", "Value=", "ENDITEM",
		"Name=value(search_range_to_capDetailModel*undistributedCost)", "Value=", "ENDITEM",
		"Name=value(licenseProfessionalModel*businessLicense)", "Value=", "ENDITEM",
		"Name=value(taskSpecInfoModel*checkboxDesc)", "Value=", "ENDITEM",
		"Name=value(taskSpecInfoModel*checklistComment)", "Value=", "ENDITEM",
		"Name=value(capContactModel*maskedSsn)", "Value=", "ENDITEM",
		"Name=value(maskformat_capContactModel*maskedSsn)", "Value=AAA-AA-AAAA", "ENDITEM",
		"Name=value(appSpecInfoTableModel*checkboxDesc)", "Value=", "ENDITEM",
		"Name=value(appSpecInfoTableModel*checklistComment)", "Value=", "ENDITEM",
		"Name=value(capContactModel*fein)", "Value=", "ENDITEM",
		"Name=value(maskformat_capContactModel*fein)", "Value=####-##-####", "ENDITEM",
		"Name=value(addressModel*houseFractionStart)", "Value=", "ENDITEM",
		"Name=value(addressModel*houseFractionEnd)", "Value=", "ENDITEM",
		"Name=value(parcelModel*legalDesc)", "Value=", "ENDITEM",
		"Name=value(capModel*checkNbr)", "Value=", "ENDITEM",
		"Name=value(capContactModel*addressLine1)", "Value=", "ENDITEM",
		"Name=value(capContactModel*addressLine2)", "Value=", "ENDITEM",
		"Name=value(capContactModel*addressLine3)", "Value=", "ENDITEM",
		"Name=value(capContactModel*city)", "Value=", "ENDITEM",
		"Name=value(capContactModel*zip_disp)", "Value=", "ENDITEM",
		"Name=value(capContactModel*zip)", "Value=", "ENDITEM",
		"Name=value(capContactModel*countryCode)", "Value=", "ENDITEM",
		"Name=value(capContactModel*state)", "Value=", "ENDITEM",
		"Name=value(capModel*trackingNbr)", "Value=", "ENDITEM",
		"Name=value(capModel*acctID)", "Value=", "ENDITEM",
		"Name=value(activityModel*activityName)", "Value=", "ENDITEM",
		"Name=date(activityModel*actDate)", "Value=", "ENDITEM",
		"Name=date(activityModel*actEndDate)", "Value=", "ENDITEM",
		"Name=value(activityModel*activityDescription)", "Value=", "ENDITEM",
		"Name=value(activityModel*activityType)", "Value=", "ENDITEM",
		"Name=value(activityModel*assignedDeptNumber)", "Value=", "ENDITEM",
		"Name=value(activityModel*assignedStaffID)", "Value=", "ENDITEM",
		"Name=value(capContactModel*fullName)", "Value=", "ENDITEM",
		"Name=value(setNameInCap)", "Value=", "ENDITEM",
		"Name=value(capConditionModel*conditionDescription)", "Value=", "ENDITEM",
		"Name=value(capConditionModel*impactCode)", "Value=", "ENDITEM",
		"Name=value(capConditionModel*conditionOfApproval)", "Value=false", "ENDITEM",
		"Name=isDailyCondition", "Value=YES", "ENDITEM",
		"Name=value(capConditionModel*conditionStatusAndTypeValue)", "Value=", "ENDITEM",
		"Name=date(capConditionModel*statusDate)", "Value=", "ENDITEM",
		"Name=date(capConditionModel*endStatusDate)", "Value=", "ENDITEM",
		"Name=value(addressModel*levelPrefix)", "Value=", "ENDITEM",
		"Name=value(addressModel*levelNumberStart)", "Value=", "ENDITEM",
		"Name=value(addressModel*levelNumberEnd)", "Value=", "ENDITEM",
		"Name=value(addressModel*houseNumberAlphaStart)", "Value=", "ENDITEM",
		"Name=value(addressModel*houseNumberAlphaEnd)", "Value=", "ENDITEM",
		"Name=date(activityModel*actDueDate)", "Value=", "ENDITEM",
		"Name=date(activityModel*actDueDateTo)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*generatedByCloning)", "Value=", "ENDITEM",
		"Name=value(capModel*pendingValidation)", "Value=", "ENDITEM",
		"Name=value(addressModel*locationType)", "Value=", "ENDITEM",
		"Name=value(addressModel*streetNameStart)", "Value=", "ENDITEM",
		"Name=value(addressModel*streetNameEnd)", "Value=", "ENDITEM",
		"Name=value(addressModel*crossStreetNameStart)", "Value=", "ENDITEM",
		"Name=value(addressModel*crossStreetNameEnd)", "Value=", "ENDITEM",
		"Name=isNewSearch", "Value=true", "ENDITEM",
		"Name=isSearchAble", "Value=true", "ENDITEM",
		"Name=template_ADDRESS_EVENT_START_DATE", "Value=", "ENDITEM",
		"Name=template_ADDRESS_EVENT_END_DATE", "Value=", "ENDITEM",
		"Name=template_ADDRESS_MONTH", "Value=", "ENDITEM",
		"Name=template_ADDRESS_FIELD1", "Value=", "ENDITEM",
		"Name=template_ADDRESS_FIELD2", "Value=", "ENDITEM",
		"Name=isSearchAble", "Value=true", "ENDITEM",
		"Name=isSearchAble", "Value=true", "ENDITEM",
		"Name=template_PARCEL_ROWM_END_DATE", "Value=", "ENDITEM",
		"Name=template_PARCEL_ROWM_START_DATE", "Value=", "ENDITEM",
		"Name=value(addressModel*streetSuffixdirection)", "Value=", "ENDITEM",
		"Name=value(capContactModel*userID)", "Value=", "ENDITEM",
		"Name=value(capContactModel*internalUserFlag)", "Value=", "ENDITEM",
		"Name=_viewstate_", "Value={\"empty\":false,\"fields\":{\"value(capContactModel*maskedSsn)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"SSN\"},\"value(capContactModel*fein)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"FEIN\"}}}", "ENDITEM",
		"LAST");

	web_url("jquery-1.11.0.min.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t399.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t400.inf", 
		"LAST");

	web_url("ac360base.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t401.inf", 
		"LAST");

	web_url("masked.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/masked.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t402.inf", 
		"LAST");

	web_url("myTask.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/myTask.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t403.inf", 
		"LAST");

	web_url("widget.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/widget/widget.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t404.inf", 
		"LAST");

	web_url("AAHELP.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/docs/AAHELP.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t405.inf", 
		"LAST");

	web_url("memoryLeakPatch.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/memoryLeakPatch.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t406.inf", 
		"LAST");

	web_url("ac360InputBoxHotKey.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360InputBoxHotKey.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t407.inf", 
		"LAST");

	web_url("popup.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/popup/popup.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t408.inf", 
		"LAST");

	web_url("dojo.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/dojo.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t409.inf", 
		"LAST");

	web_url("menubar.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/menubar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t410.inf", 
		"LAST");

	web_url("ac360.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t411.inf", 
		"LAST");

	web_url("relatedCAPsPopupBox.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/relatedCAPsPopupBox.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t412.inf", 
		"LAST");

	web_url("opos.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/opos.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t413.inf", 
		"LAST");

	web_url("Next_Button_Grayed_Out.jpg", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/sky_blue/menu/Next_Button_Grayed_Out.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t414.inf", 
		"LAST");

	web_url("watermark.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/watermark.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t415.inf", 
		"LAST");

	web_url("dojo412.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/datapicker/treePicker/js/dojo412.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t416.inf", 
		"LAST");

	web_url("hashMap.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t417.inf", 
		"LAST");

	web_url("jquery.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ext-2.0.2/adapter/jquery/jquery.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t418.inf", 
		"LAST");

	web_url("layoutPublic.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/layoutPublic.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t419.inf", 
		"LAST");

	web_url("dojo.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/dojo.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t420.inf", 
		"LAST");

	web_url("ac360ui.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t421.inf", 
		"LAST");

	web_url("permitPlus.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/permitPlus.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t422.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t423.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t424.inf", 
		"LAST");

	web_url("I18N.js_14", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t425.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_14", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t426.inf", 
		"LAST");

	web_url("checkTextAreaLength.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/checkTextAreaLength.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t427.inf", 
		"LAST");

	web_url("I18N.js_15", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t428.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_15", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t429.inf", 
		"LAST");

	web_url("I18N.js_16", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t430.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_16", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t431.inf", 
		"LAST");

	web_url("I18N.js_17", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t432.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_17", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t433.inf", 
		"LAST");

	web_url("Tree.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/Tree.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t434.inf", 
		"LAST");

	web_url("fx.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/fx.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t435.inf", 
		"LAST");

	web_url("Toggler.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/fx/Toggler.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t436.inf", 
		"LAST");

	web_url("DeferredList.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/DeferredList.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t437.inf", 
		"LAST");

	web_url("_Widget.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_Widget.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t438.inf", 
		"LAST");

	web_url("_base.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t439.inf", 
		"LAST");

	web_url("focus.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/focus.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t440.inf", 
		"LAST");

	web_url("manager.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/manager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t441.inf", 
		"LAST");

	web_url("place.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/place.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t442.inf", 
		"LAST");

	web_url("AdapterRegistry.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/AdapterRegistry.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t443.inf", 
		"LAST");

	web_url("popup.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/popup.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t444.inf", 
		"LAST");

	web_url("window.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/window.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t445.inf", 
		"LAST");

	web_url("scroll.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/scroll.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t446.inf", 
		"LAST");

	web_url("sniff.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/sniff.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t447.inf", 
		"LAST");

	web_url("typematic.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/typematic.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t448.inf", 
		"LAST");

	web_url("wai.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/wai.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t449.inf", 
		"LAST");

	web_url("_Templated.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_Templated.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t450.inf", 
		"LAST");

	web_url("string.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/string.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t451.inf", 
		"LAST");

	web_url("parser.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/parser.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t452.inf", 
		"LAST");

	web_url("stamp.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/date/stamp.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t453.inf", 
		"LAST");

	web_url("cache.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/cache.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t454.inf", 
		"LAST");

	web_url("_Container.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_Container.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t455.inf", 
		"LAST");

	web_url("_Contained.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/_Contained.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t456.inf", 
		"LAST");

	web_url("cookie.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/cookie.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t457.inf", 
		"LAST");

	web_url("regexp.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/regexp.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t458.inf", 
		"LAST");

	web_url("TreeStoreModel.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/tree/TreeStoreModel.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t459.inf", 
		"LAST");

	web_url("ForestStoreModel.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dijit/tree/ForestStoreModel.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t460.inf", 
		"LAST");

	web_url("QueryReadStore.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojox/data/QueryReadStore.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t461.inf", 
		"LAST");

	web_url("sorter.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojo/data/util/sorter.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t462.inf", 
		"LAST");

	web_url("ArrayList.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojox/collections/ArrayList.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t463.inf", 
		"LAST");

	web_url("_base.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo1.4.3/dojox/collections/_base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t464.inf", 
		"LAST");

	web_url("blank.jsp_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t465.inf", 
		"Mode=HTTP", 
		"LAST");

	web_custom_request("capConditionList.do_2",
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/condition/capConditionList.do?mode=viewByCap&module=Building&capIDs=~17BLD-00000-00100-0",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building",
		"Snapshot=t466.inf",
		"Mode=HTTP",
		"Body=TRANSACTION_TOKEN_KEY_FOR_CAPSEARCHFORM={TRANSACTION_TOKEN_KEY_FOR_CAPSEARCHFORM}&value(FirstEntryURL)=%2Fportlets%2Fcap%2FcapSearch.do%3Fmode%3Dsearch%26isFromSearch%3Dtrue%26isSearchButton%3Dtrue%26module%3DBuilding%26isGeneralCAP%3DY&value(CurrentEntryURL)=%2Fportlets%2Fcap%2FcapSearch.do%3Fmodule%3DBuilding%26mode%3DsearchButtonViewMode&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=submit&modeName=searchList&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=111&exceptionLogID=&portletVars=%7B%7D&generalCAPSearch=&value(selectedQuickQuery)=&isShowAllModules=N&moduleList=Building&isGeneralCAP=Y&gisPortletName=&value(source)=&value(initMap)=&objectName=capList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=111&sessionIdFromWindow=q0DRFTb9tIe7JGj-xD%2BPWAnC&listID=&printType=&checkBoxValue=&value(mode)=view&capInfo=&value(capInfo)=ALL&calendarEventId=&calendarId=&isNeedClear=N&currentPartialModule=&isResizeList=Y&isDynaPaging=true&page-navigator-input-id=1&val"
		"ue(CAPID1%2C0)=17BLD&value(CAPID2%2C0)=00000&value(CAPID3%2C0)=00100&value(moduleName%2C0)=Building&value(altID%2C0)=17-2017-4-0339&value(capType.alias)=&value(addressModel.addressLine1)=&value(addressModel.addressLine2)=&value(licenseProfessionalModel.salutation)=&value(licenseProfessionalModel.gender)=&value(licenseProfessionalModel.postOfficeBox)=&value(licenseProfessionalModel.busName2)=&date(licenseProfessionalModel.birthDate)=&value(capContactModel.salutation)=&value(capContactModel.gender)=&value(capContactModel.postOfficeBox)=&date(capContactModel.birthDate)=&value(capContactModel.addressLine1)=&value(capContactModel.addressLine2)=&value(capContactModel.addressLine3)=&value(capContactModel.city)=&value(capContactModel.state)=&value(capContactModel.zip)=&value(capContactModel.countryCode)=&value(activityModel.activityDescription)=&value(activityModel.activityName)=&value(activityModel.activityType)=&date(activityModel.actDate)=&value(activityModel.assignedDeptNumber)=&value(activityModel.assignedStaf"
		"fID)=&value(addressModel.levelPrefix)=&value(addressModel.levelNumberStart)=&value(addressModel.levelNumberEnd)=&value(addressModel.houseNumberAlphaStart)=&value(addressModel.houseNumberAlphaEnd)=&date(activityModel.actDueDate)=&value(capContactModel.userID)=&value(capContactModel.internalUserFlag)=&pageSizeR=5&maxIndex=1&firstIndex=0&",
		"LAST");

	web_url("Map.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Map.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t467.inf", 
		"LAST");

	web_url("ac360base.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t468.inf", 
		"LAST");

	web_submit_data("empty.jsp_3", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t469.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_url("jquery-1.11.0.min.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t470.inf", 
		"LAST");

	web_url("hashMap.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t471.inf", 
		"LAST");

	web_url("ac360ui.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t472.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t473.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t474.inf", 
		"LAST");

	web_url("session.do_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.c7ae1", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t475.inf", 
		"LAST");

	lr_end_transaction("TC1_6_Search_Record",2);

	lr_think_time(11);

	lr_start_transaction("TC1_7_Record_Details");

	web_url("session.do_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.c7ae1", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t476.inf", 
		"LAST");

	web_url("CapTabSummary.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t477.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("jquery-1.11.0.min.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t478.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t479.inf", 
		"LAST");

	web_url("widget.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/widget/widget.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t480.inf", 
		"LAST");

	web_url("ac360base.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t481.inf", 
		"LAST");

	web_url("memoryLeakPatch.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/memoryLeakPatch.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t482.inf", 
		"LAST");

	web_url("ac360.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t483.inf", 
		"LAST");

	web_url("ac360InputBoxHotKey.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360InputBoxHotKey.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t484.inf", 
		"LAST");

	web_url("popup.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/popup/popup.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t485.inf", 
		"LAST");

	web_url("masked.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/masked.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t486.inf", 
		"LAST");

	web_url("menubar.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/menubar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t487.inf", 
		"LAST");

	web_url("opos.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/opos.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t488.inf", 
		"LAST");

	web_url("myTask.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/myTask.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t489.inf", 
		"LAST");

	web_url("watermark.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/watermark.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t490.inf", 
		"LAST");

	web_url("AAHELP.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/docs/AAHELP.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t491.inf", 
		"LAST");

	web_url("layoutPublic.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/layoutPublic.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t492.inf", 
		"LAST");

	web_url("portletInterface.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/portletInterface.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t493.inf", 
		"LAST");

	web_url("hashMap.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t494.inf", 
		"LAST");

	web_url("session.do_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.c7ae1", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t495.inf", 
		"LAST");

	web_url("ac360ui.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t496.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t497.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t498.inf", 
		"LAST");

	web_url("I18N.js_18", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t499.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_18", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t500.inf", 
		"LAST");

	web_url("checkTextAreaLength.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/checkTextAreaLength.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t501.inf", 
		"LAST");

	web_url("left-hover.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/sky_blue/menu/left-hover.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t502.inf", 
		"LAST");

	web_url("Drop_Menu_Button_Hover.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/reskin/Drop_Menu_Button_Hover.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t503.inf", 
		"LAST");

	web_url("I18N.js_19", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t504.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_19", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t505.inf", 
		"LAST");

	web_url("I18N.js_20", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t506.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_20", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t507.inf", 
		"LAST");

	web_url("I18N.js_21", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t508.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_21", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t509.inf", 
		"LAST");

	web_url("blank.jsp_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t510.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("blank.jsp_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t511.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("Map.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Map.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t512.inf", 
		"LAST");

	web_url("ac360base.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t513.inf", 
		"LAST");

	web_submit_data("empty.jsp_4", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t514.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_url("jquery-1.11.0.min.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t515.inf", 
		"LAST");

	web_url("hashMap.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t516.inf", 
		"LAST");

	web_url("ac360ui.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t517.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t518.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_13", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t519.inf", 
		"LAST");

	web_custom_request("tabRecordCount.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/cap/tabRecordCount.do?module=Building&ID1=17BLD&ID2=00000&ID3=00100&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t520.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		"LAST");

	web_url("content-left-top.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/sky_blue/tab/content-left-top.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t521.inf", 
		"LAST");

	web_url("content-left-bottom.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/sky_blue/tab/content-left-bottom.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t522.inf", 
		"LAST");

	web_url("back_medium_active.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/reskin/back_medium_active.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t523.inf", 
		"LAST");

	web_url("content-right-bottom.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/sky_blue/tab/content-right-bottom.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t524.inf", 
		"LAST");

	web_custom_request("tabRecordCount.do_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/cap/tabRecordCount.do?module=Building&ID1=17BLD&ID2=00000&ID3=00100&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E16%3C/countID%3E%3CcountID%3E15%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C"
		"/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E226%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E20%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/"
		"countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E303%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t525.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		"LAST");

	web_url("content-right-top.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/sky_blue/tab/content-right-top.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t526.inf", 
		"LAST");

	web_url("info.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/reskin/info.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t527.inf", 
		"LAST");

	lr_end_transaction("TC1_7_Record_Details",2);

	lr_think_time(19);

	lr_start_transaction("TC1_8_Click_Addtl_Info");

	web_url("session.do_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.c7ae1", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t528.inf", 
		"LAST");

	web_url("addtInfoForm.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t529.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("session.do_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.c7ae1", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=FLAGSTAFF&ID1=17BLD&ID2=00000&ID3=00100&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t530.inf", 
		"LAST");

	web_url("session.do_13", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.c7ae1", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t531.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_14", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t532.inf", 
		"LAST");

	web_url("jquery-1.11.0.min.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t533.inf", 
		"LAST");

	web_url("AAHELP.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/docs/AAHELP.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t534.inf", 
		"LAST");

	web_url("ac360.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t535.inf", 
		"LAST");

	web_url("widget.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/widget/widget.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t536.inf", 
		"LAST");

	web_url("ac360base.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t537.inf", 
		"LAST");

	web_url("memoryLeakPatch.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/memoryLeakPatch.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t538.inf", 
		"LAST");

	web_url("menubar.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/menubar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t539.inf", 
		"LAST");

	web_url("popup.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/popup/popup.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t540.inf", 
		"LAST");

	web_url("ac360InputBoxHotKey.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360InputBoxHotKey.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t541.inf", 
		"LAST");

	web_url("layoutPublic.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/layoutPublic.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t542.inf", 
		"LAST");

	web_url("watermark.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/watermark.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t543.inf", 
		"LAST");

	web_url("masked.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/masked.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t544.inf", 
		"LAST");

	web_url("opos.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/opos.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t545.inf", 
		"LAST");

	web_url("myTask.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/myTask.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t546.inf", 
		"LAST");

	web_url("portletInterface.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/portletInterface.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t547.inf", 
		"LAST");

	web_url("hashMap.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t548.inf", 
		"LAST");

	web_custom_request("Exchange.asmx", 
		"URL=https://outlook.office365.com/EWS/Exchange.asmx", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t549.inf", 
		"Mode=HTTP", 
		"EncType=text/xml", 
		"Body=<?xml version=\"1.0\"?>\r\n<q:Envelope xmlns:q=\"http://schemas.xmlsoap.org/soap/envelope/\"><q:Body><ex12m:GetUserOofSettingsRequest xmlns:ex12m=\"http://schemas.microsoft.com/exchange/services/2006/messages\"><ex12t:Mailbox xmlns:ex12t=\"http://schemas.microsoft.com/exchange/services/2006/types\"><ex12t:Address>hboyina@accela.com</ex12t:Address><ex12t:RoutingType>SMTP</ex12t:RoutingType></ex12t:Mailbox></ex12m:GetUserOofSettingsRequest></q:Body></q:Envelope>", 
		"LAST");

	lr_think_time(39);

	web_url("ac360ScrollBar.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t550.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_15", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t551.inf", 
		"LAST");

	web_url("I18N.js_22", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t552.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_22", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t553.inf", 
		"LAST");

	web_url("checkTextAreaLength.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/checkTextAreaLength.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t554.inf", 
		"LAST");

	web_url("I18N.js_23", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t555.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_23", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t556.inf", 
		"LAST");

	web_url("I18N.js_24", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t557.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_24", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t558.inf", 
		"LAST");

	web_url("I18N.js_25", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t559.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_25", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t560.inf", 
		"LAST");

	web_url("Map.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Map.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t561.inf", 
		"LAST");

	web_url("blank.jsp_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t562.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("ac360base.js_13", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t563.inf", 
		"LAST");

	web_url("jquery-1.11.0.min.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t564.inf", 
		"LAST");

	web_url("hashMap.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t565.inf", 
		"LAST");

	web_url("ac360ui.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t566.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t567.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_16", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t568.inf", 
		"LAST");

	web_custom_request("tabRecordCount.do_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/cap/tabRecordCount.do?module=Building&ID1=17BLD&ID2=00000&ID3=00100&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t569.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		"LAST");

	web_custom_request("tabRecordCount.do_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/cap/tabRecordCount.do?module=Building&ID1=17BLD&ID2=00000&ID3=00100&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E16%3C/countID%3E%3CcountID%3E15%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C"
		"/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E226%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E20%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/"
		"countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E303%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t570.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		"LAST");

	lr_think_time(5);

	web_url("session.do_14", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.c7ae1", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t571.inf", 
		"LAST");

	lr_end_transaction("TC1_8_Click_Addtl_Info",2);

	lr_think_time(7);

	lr_start_transaction("TC19_Save_Addtl_Info");

	web_url("session.do_15", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.c7ae1", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t572.inf", 
		"LAST");

	lr_think_time(24);

	web_url("session.do_16", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.c7ae1", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t573.inf", 
		"LAST");

	lr_end_transaction("TC19_Save_Addtl_Info",2);

	lr_think_time(26);

	lr_start_transaction("TC1_11_Save_AppHistory");

	web_url("session.do_17", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.c7ae1", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t574.inf", 
		"LAST");

	lr_think_time(4);

	web_url("capStatusHistory.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/addtinfo/addtInfoForm.do?mode=view&module=Building", 
		"Snapshot=t575.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("jquery-1.11.0.min.js_13", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t576.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_17", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t577.inf", 
		"LAST");

	web_url("widget.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/widget/widget.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t578.inf", 
		"LAST");

	web_url("ac360base.js_14", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t579.inf", 
		"LAST");

	web_url("memoryLeakPatch.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/memoryLeakPatch.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t580.inf", 
		"LAST");

	web_url("ac360.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t581.inf", 
		"LAST");

	web_url("popup.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/popup/popup.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t582.inf", 
		"LAST");

	web_url("ac360InputBoxHotKey.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360InputBoxHotKey.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t583.inf", 
		"LAST");

	web_url("masked.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/masked.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t584.inf", 
		"LAST");

	web_url("opos.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/opos.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t585.inf", 
		"LAST");

	web_url("myTask.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/myTask.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t586.inf", 
		"LAST");

	web_url("menubar.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/menubar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t587.inf", 
		"LAST");

	web_url("layoutPublic.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/layoutPublic.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t588.inf", 
		"LAST");

	web_url("AAHELP.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/docs/AAHELP.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t589.inf", 
		"LAST");

	web_url("portletInterface.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/portletInterface.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t590.inf", 
		"LAST");

	web_url("hashMap.js_13", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t591.inf", 
		"LAST");

	web_url("watermark.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/watermark.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t592.inf", 
		"LAST");

	web_url("ac360ui.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t593.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t594.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_18", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t595.inf", 
		"LAST");

	web_url("I18N.js_26", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t596.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_26", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t597.inf", 
		"LAST");

	web_url("checkTextAreaLength.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/checkTextAreaLength.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t598.inf", 
		"LAST");

	web_url("I18N.js_27", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t599.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_27", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t600.inf", 
		"LAST");

	web_url("I18N.js_28", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t601.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_28", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t602.inf", 
		"LAST");

	web_url("I18N.js_29", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t603.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_29", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t604.inf", 
		"LAST");

	web_url("Map.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Map.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t605.inf", 
		"LAST");

	web_url("blank.jsp_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t606.inf", 
		"Mode=HTTP", 
		"LAST");

	web_submit_data("empty.jsp_5", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t607.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_url("ac360base.js_15", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t608.inf", 
		"LAST");

	web_url("jquery-1.11.0.min.js_14", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t609.inf", 
		"LAST");

	web_url("hashMap.js_14", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t610.inf", 
		"LAST");

	web_url("ac360ui.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t611.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_13", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t612.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_19", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t613.inf", 
		"LAST");

	web_custom_request("tabRecordCount.do_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/cap/tabRecordCount.do?module=Building&ID1=17BLD&ID2=00000&ID3=00100&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t614.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		"LAST");

	web_custom_request("tabRecordCount.do_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/cap/tabRecordCount.do?module=Building&ID1=17BLD&ID2=00000&ID3=00100&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E16%3C/countID%3E%3CcountID%3E15%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C"
		"/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E226%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E20%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/"
		"countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E303%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t615.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		"LAST");

	web_url("session.do_18", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.c7ae1", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t616.inf", 
		"LAST");

	lr_end_transaction("TC1_11_Save_AppHistory",2);

	lr_think_time(8);

	lr_start_transaction("TC1_12_Click_WorkFlow");

	web_url("session.do_19", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.c7ae1", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t617.inf", 
		"LAST");

	web_url("workflowStatusList.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t618.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("Ac360ToolManager.js_20", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t619.inf", 
		"LAST");

	web_url("jquery-1.11.0.min.js_15", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t620.inf", 
		"LAST");

	web_url("masked.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/masked.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t621.inf", 
		"LAST");

	web_url("widget.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/widget/widget.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t622.inf", 
		"LAST");

	web_url("opos.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/opos.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t623.inf", 
		"LAST");

	web_url("memoryLeakPatch.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/memoryLeakPatch.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t624.inf", 
		"LAST");

	web_url("ac360base.js_16", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t625.inf", 
		"LAST");

	web_url("ac360InputBoxHotKey.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360InputBoxHotKey.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t626.inf", 
		"LAST");

	web_url("ac360.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t627.inf", 
		"LAST");

	web_url("menubar.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/menubar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t628.inf", 
		"LAST");

	web_url("popup.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/popup/popup.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t629.inf", 
		"LAST");

	web_url("myTask.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/myTask.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t630.inf", 
		"LAST");

	web_url("AAHELP.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/docs/AAHELP.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t631.inf", 
		"LAST");

	web_url("layoutPublic.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/layoutPublic.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t632.inf", 
		"LAST");

	web_url("main.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/workflow/main.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t633.inf", 
		"LAST");

	web_url("common.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/common.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t634.inf", 
		"LAST");

	web_url("portletInterface.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/portletInterface.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t635.inf", 
		"LAST");

	web_url("handlebars.min.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/node_modules/handlebars/dist/handlebars.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t636.inf", 
		"LAST");

	web_url("hashMap.js_15", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t637.inf", 
		"LAST");

	web_url("i18n-config.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/i18n-config.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t638.inf", 
		"LAST");

	web_url("watermark.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/watermark.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t639.inf", 
		"LAST");

	web_url("ac360ui.js_13", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t640.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_14", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t641.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_21", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t642.inf", 
		"LAST");

	web_url("I18N.js_30", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t643.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_30", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t644.inf", 
		"LAST");

	web_url("checkTextAreaLength.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/checkTextAreaLength.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t645.inf", 
		"LAST");

	web_url("I18N.js_31", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t646.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_31", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t647.inf", 
		"LAST");

	web_url("I18N.js_32", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t648.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_32", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t649.inf", 
		"LAST");

	web_url("I18N.js_33", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t650.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_33", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t651.inf", 
		"LAST");

	web_url("blank.jsp_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t652.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("workflowTaskList.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t653.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("Map.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Map.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t654.inf", 
		"LAST");

	web_url("ac360base.js_17", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t655.inf", 
		"LAST");

	web_url("ac360.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t656.inf", 
		"LAST");

	web_submit_data("empty.jsp_6", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t657.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_url("widget.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/widget/widget.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t658.inf", 
		"LAST");

	web_url("jquery-1.11.0.min.js_16", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t659.inf", 
		"LAST");

	web_url("popup.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/popup/popup.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t660.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_22", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t661.inf", 
		"LAST");

	web_url("memoryLeakPatch.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/memoryLeakPatch.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t662.inf", 
		"LAST");

	web_url("masked.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/masked.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t663.inf", 
		"LAST");

	web_url("ac360InputBoxHotKey.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360InputBoxHotKey.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t664.inf", 
		"LAST");

	web_url("treeTPlus.gif", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/tree/treeTPlus.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t665.inf", 
		"LAST");

	web_url("myTask.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/myTask.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t666.inf", 
		"LAST");

	web_url("watermark.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/watermark.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t667.inf", 
		"LAST");

	web_url("opos.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/opos.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t668.inf", 
		"LAST");

	web_url("AAHELP.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/docs/AAHELP.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t669.inf", 
		"LAST");

	web_url("root.gif", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/tree/root.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t670.inf", 
		"LAST");

	web_url("treeFolder.gif", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/tree/treeFolder.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t671.inf", 
		"LAST");

	web_url("layoutPublic.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/layoutPublic.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t672.inf", 
		"LAST");

	web_url("menubar.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/menubar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t673.inf", 
		"LAST");

	web_url("hashMap.js_16", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t674.inf", 
		"LAST");

	web_url("dojo.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/dojo.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t675.inf", 
		"LAST");

	web_url("treeLPlus.gif", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/tree/treeLPlus.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t676.inf", 
		"LAST");

	web_url("active.gif", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/active.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t677.inf", 
		"LAST");

	web_url("white.gif", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/white.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t678.inf", 
		"LAST");

	web_url("treeWhite.gif", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/tree/treeWhite.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t679.inf", 
		"LAST");

	web_custom_request("text.do_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/text.do?mode=localizedText", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t680.inf", 
		"Mode=HTTP", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"AANewUX_WorkFlow_Assigned\":\"\",\"AANewUX_WorkFlow_Started\":\"\",\"AANewUX_WorkFlow_Save\":\"\",\"AANewUX_WorkFlow_Cancel\":\"\",\"AANewUX_WorkFlow_ShowAll\":\"\",\"AANewUX_WorkFlow_By\":\"\",\"AANewUX_WorkFlow_Due\":\"\",\"AANewUX_WorkFlow_Subtask\":\"\",\"AANewUX_WorkFlow_NewAdhocTask\":\"\",\"AANewUX_WorkFlow_AdditionalAdhocTask\":\"\",\"AANewUX_WorkFlow_WorkflowTask\":\"\",\"AANewUX_WorkFlow_BucketCompleted\":\"\",\"AANewUX_WorkFlow_BucketInprogress\":\"\",\""
		"AANewUX_WorkFlow_BucketUpNext\":\"\",\"AANewUX_WorkFlow_TaskInactive\":\"\",\"AANewUX_WorkFlow_TaskInprogress\":\"\",\"AANewUX_WorkFlow_TaskComplete\":\"\",\"AANewUX_WorkFlow_ViewHistory\":\"\",\"AANewUX_WorkFlow_ViewWorkflowDesign\":\"\",\"AANewUX_WorkFlow_IncludeAddPage\":\"\",\"AANewUX_WorkFlow_PageOf\":\"\",\"AANewUX_WorkFlow_PageCompleted\":\"\",\"AANewUX_WorkFlow_WorkflowDesign\":\"\",\"AANewUX_Designer_NewDesigner\":\"\",\"AANewUX_Designer_OldDesigner\":\"\",\"AANewUX_Designer_Preview\":\""
		"\",\"AANewUX_Designer_Text\":\"\",\"AANewUX_Designer_Controls\":\"\",\"AANewUX_Designer_NoCtlAvailable\":\"\",\"AANewUX_Designer_Drag\":\"\",\"AANewUX_Designer_Select\":\"\",\"AANewUX_Designer_Properties\":\"\",\"AANewUX_Designer_Ok\":\"\",\"AANewUX_Designer_Label\":\"\",\"AANewUX_Designer_Url\":\"\",\"AANewUX_Designer_Save\":\"\",\"AANewUX_Designer_Cancel\":\"\",\"AANewUX_Designer_DynamicLabelText\":\"\",\"AANewUX_CheckList_SaveAll\":\"\"}", 
		"LAST");

	web_url("accelicons.eot", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/styles/fonts/accelicons.eot?", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t681.inf", 
		"LAST");

	web_url("ac360ui.js_14", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t682.inf", 
		"LAST");

	web_url("workflow.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/workflow.do?mode=getTasks&module=Building", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t683.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_15", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t684.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_23", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t685.inf", 
		"LAST");

	web_url("I18N.js_34", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t686.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_34", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t687.inf", 
		"LAST");

	web_url("checkTextAreaLength.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/checkTextAreaLength.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t688.inf", 
		"LAST");

	web_url("I18N.js_35", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t689.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_35", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t690.inf", 
		"LAST");

	web_url("I18N.js_36", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t691.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_36", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t692.inf", 
		"LAST");

	web_url("I18N.js_37", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t693.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_37", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t694.inf", 
		"LAST");

	web_url("Map.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Map.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t695.inf", 
		"LAST");

	web_submit_data("empty.jsp_7", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t696.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/cap/tabRecordCount.do?module=Building&ID1=17BLD&ID2=00000&ID3=00100&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t697.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		"LAST");

	web_custom_request("tabRecordCount.do_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/cap/tabRecordCount.do?module=Building&ID1=17BLD&ID2=00000&ID3=00100&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E16%3C/countID%3E%3CcountID%3E15%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C"
		"/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E226%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E20%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/"
		"countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E303%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t698.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		"LAST");

	web_url("session.do_20", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.c7ae1", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t699.inf", 
		"LAST");

	lr_end_transaction("TC1_12_Click_WorkFlow",2);

	lr_think_time(12);

	lr_start_transaction("SignOut");

	web_url("session.do_21", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.c7ae1", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t700.inf", 
		"LAST");

	web_url("signoff.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/signoff.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t701.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("signout.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/security/signout.do", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/signoff.do", 
		"Snapshot=t702.inf", 
		"LAST");

	web_submit_data("portal", 
		"Action=https://aa-pt6245.dev.accela.com:5443/jetspeed/portal?action=JClearCookie", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/signoff.do", 
		"Snapshot=t703.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_url("logoutAction.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/ssoAdapter/logoutAction.do?servProvCode=FLAGSTAFF&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/signoff.do", 
		"Snapshot=t704.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_think_time(4);

	web_url("hostSignon.do_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?signOff=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/ssoAdapter/logoutAction.do?servProvCode=FLAGSTAFF&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"Snapshot=t705.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("host-signon.css_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/css/host-signon.css", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?signOff=true", 
		"Snapshot=t706.inf", 
		"LAST");

	web_url("ac360.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?signOff=true", 
		"Snapshot=t707.inf", 
		"LAST");

	web_url("spacer.gif_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/images/spacer.gif", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?signOff=true", 
		"Snapshot=t708.inf", 
		"LAST");

	web_url("memoryLeakPatch.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/memoryLeakPatch.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?signOff=true", 
		"Snapshot=t709.inf", 
		"LAST");

	web_url("I18N.js_38", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?signOff=true", 
		"Snapshot=t710.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_38", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?signOff=true", 
		"Snapshot=t711.inf", 
		"LAST");

	web_url("checkTextAreaLength.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/checkTextAreaLength.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?signOff=true", 
		"Snapshot=t712.inf", 
		"LAST");

	web_url("Util.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/widget/Util.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?signOff=true", 
		"Snapshot=t713.inf", 
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=requestToken_1",
		"RegExp=name=\"requestToken\"\\ value=\"(.*?)\">\\\r\\\n\\\t\\\t<input\\ type",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=requestLanguageToken_1",
		"RegExp=name=\"requestLanguageToken\"\\ value=\"(.*?)\"\\ id",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

	web_url("hostSignon.do_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?signOff=true", 
		"Snapshot=t714.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("sso.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/javascript/sso.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t715.inf", 
		"LAST");

	web_url("dojo.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/dojo.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t716.inf", 
		"LAST");

	web_url("login.css_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/includes/login.css", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t717.inf", 
		"LAST");

	web_url("accela_logo_v2.jpg_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/images/accela_logo_v2.jpg", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t718.inf", 
		"LAST");

	web_url("hook.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/images/hook.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t719.inf", 
		"LAST");

	web_url("login-bar.gif_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/images/login-bar.gif", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t720.inf", 
		"LAST");

	web_url("json.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/json.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t721.inf", 
		"LAST");

	web_url("AdapterRegistry.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/AdapterRegistry.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t722.inf", 
		"LAST");

	web_submit_data("getconfigs.do_2",
		"Action=https://aa-pt6245.dev.accela.com:5443/security/getconfigs.do",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true&signOff=true",
		"Snapshot=t723.inf",
		"Mode=HTTP",
		"ITEMDATA",
		"Name=action", "Value=signon", "ENDITEM",
		"Name=successUrl", "Value=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", "ENDITEM",
		"Name=cookieUserName", "Value=", "ENDITEM",
		"Name=cookieAgencyName", "Value=", "ENDITEM",
		"Name=requestToken", "Value={requestToken_1}", "ENDITEM",
		"Name=requestLanguageToken", "Value={requestLanguageToken_1}", "ENDITEM",
		"Name=password1", "Value=", "ENDITEM",
		"Name=servProvCode", "Value=", "ENDITEM",
		"Name=username", "Value=", "ENDITEM",
		"Name=password", "Value=", "ENDITEM",
		"Name=accela_select_language", "Value=", "ENDITEM",
		"Name=action", "Value=JSwitchLanguage", "ENDITEM",
		"Name=switchLanguageForV360", "Value=false", "ENDITEM",
		"LAST");

	lr_end_transaction("SignOut",2);

	return 0;
}
# 5 "c:\\users\\hboyina\\desktop\\desktop_08102017_created\\912_pt_08102017\\scripts\\new folde\\08162017\\912_devint_tc1\\\\combined_912_DevInt_TC1.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\users\\hboyina\\desktop\\desktop_08102017_created\\912_pt_08102017\\scripts\\new folde\\08162017\\912_devint_tc1\\\\combined_912_DevInt_TC1.c" 2

