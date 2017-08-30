# 1 "c:\\users\\hboyina\\desktop\\desktop_08102017_created\\912_pt_08102017\\scripts\\new folde\\08162017\\912_devint_tc3\\\\combined_912_DevInt_TC3.c"
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







 
 



















# 1 "c:\\users\\hboyina\\desktop\\desktop_08102017_created\\912_pt_08102017\\scripts\\new folde\\08162017\\912_devint_tc3\\\\combined_912_DevInt_TC3.c" 2

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

 
 
 

                               


 
 
 





















# 2 "c:\\users\\hboyina\\desktop\\desktop_08102017_created\\912_pt_08102017\\scripts\\new folde\\08162017\\912_devint_tc3\\\\combined_912_DevInt_TC3.c" 2

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


 
 


# 3 "c:\\users\\hboyina\\desktop\\desktop_08102017_created\\912_pt_08102017\\scripts\\new folde\\08162017\\912_devint_tc3\\\\combined_912_DevInt_TC3.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\users\\hboyina\\desktop\\desktop_08102017_created\\912_pt_08102017\\scripts\\new folde\\08162017\\912_devint_tc3\\\\combined_912_DevInt_TC3.c" 2

# 1 "Action.c" 1
Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

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

	lr_think_time(7);

	web_url("ac360.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?successUrl=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t3.inf", 
		"LAST");

	lr_think_time(6);

	web_url("spacer.gif", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/images/spacer.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?successUrl=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t4.inf", 
		"LAST");

	web_url("I18N.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?successUrl=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t5.inf", 
		"LAST");

	web_url("memoryLeakPatch.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/memoryLeakPatch.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?successUrl=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t6.inf", 
		"LAST");

	web_url("host-signon.css", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/css/host-signon.css", 
		"Resource=1", 
		"RecContentType=text/css", 
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

	lr_think_time(6);

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

	lr_think_time(5);

 
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

	lr_think_time(8);

	lr_start_transaction("Login");

	web_custom_request("loginAction.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/ssoAdapter/loginAction.do?requestType=checkWebSSOAdapter&servProvCode=flagstaff", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t21.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded", 
		"LAST");

	lr_think_time(4);

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
		"Name=servProvCode", "Value=flagstaff", "ENDITEM",
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

	web_url("bootstrap.min.css", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/styles/bootstrap/bootstrap.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t26.inf", 
		"LAST");

	web_url("app.min.css", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/styles/app.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t27.inf", 
		"LAST");

	web_url("ng-sortable.min.css", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/styles/ng-sortable.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t28.inf", 
		"LAST");

	web_url("angular-ui-router.min.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/bower_components/angular-ui-router/release/angular-ui-router.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t29.inf", 
		"LAST");

	web_url("modernizr.2.8.3.custom.min.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/lib/modernizr.2.8.3.custom.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t30.inf", 
		"LAST");

	web_url("angular-sanitize.min.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/bower_components/angular-sanitize/angular-sanitize.min.js", 
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

	web_url("angular.min.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/bower_components/angular/angular.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t33.inf", 
		"LAST");

	web_url("ui-bootstrap-tpls.min.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/bower_components/angular-bootstrap/ui-bootstrap-tpls.min.js", 
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

	web_url("angular-touch.min.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/bower_components/angular-touch/angular-touch.min.js", 
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

	web_url("ng-csv.min.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/bower_components/ng-csv/build/ng-csv.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t39.inf", 
		"LAST");

	web_url("smart-table.min.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/bower_components/angular-smart-table/dist/smart-table.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t40.inf", 
		"LAST");

	web_url("lodash.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/bower_components/lodash/lodash.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t41.inf", 
		"LAST");

	web_url("ct-ui-router-extras.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/bower_components/ui-router-extras/release/ct-ui-router-extras.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t42.inf", 
		"LAST");

	web_url("en-us.min.css", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/styles/en-us.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t43.inf", 
		"LAST");

	web_url("angular-deferred-bootstrap.min.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/bower_components/angular-deferred-bootstrap/angular-deferred-bootstrap.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t44.inf", 
		"LAST");

	web_url("handlebars.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/bower_components/handlebars/handlebars.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t45.inf", 
		"LAST");

	web_url("angular-locale_en-us.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/bower_components/angular-i18n/angular-locale_en-us.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t46.inf", 
		"LAST");

	web_url("config.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/config.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t47.inf", 
		"LAST");

	web_url("accela.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/accela.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t48.inf", 
		"LAST");

	web_url("module.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/module.js", 
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

	web_url("stacktrace-wrapper.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/stacktrace-wrapper.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t51.inf", 
		"LAST");

	web_url("autofocus.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/directives/autofocus.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t52.inf", 
		"LAST");

	web_url("sliderbar-controller.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/controllers/sliderbar-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t53.inf", 
		"LAST");

	web_url("click-outside.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/directives/click-outside.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t54.inf", 
		"LAST");

	web_url("content-limit-to.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/directives/content-limit-to.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t55.inf", 
		"LAST");

	web_url("ng-repeat-finish.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/directives/ng-repeat-finish.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t56.inf", 
		"LAST");

	web_url("on-load.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/directives/on-load.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t57.inf", 
		"LAST");

	web_url("typeahead-filter.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/directives/typeahead-filter.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t58.inf", 
		"LAST");

	web_url("select-on-focus.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/directives/select-on-focus.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t59.inf", 
		"LAST");

	web_url("styled-checkbox.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/directives/styled-checkbox.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t60.inf", 
		"LAST");

	web_url("table-height-sync.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/directives/table-height-sync.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t61.inf", 
		"LAST");

	web_url("work-space.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/entities/work-space.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t62.inf", 
		"LAST");

	web_url("task.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/entities/task.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t63.inf", 
		"LAST");

	web_url("launchpad-page.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/entities/launchpad-page.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t64.inf", 
		"LAST");

	web_url("user-profile.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/entities/user-profile.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t65.inf", 
		"LAST");

	web_url("base-filter.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/filters/base-filter.js", 
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

	web_url("overflow.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/filters/overflow.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t70.inf", 
		"LAST");

	web_url("reverse.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/filters/reverse.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t71.inf", 
		"LAST");

	web_url("dashboard-model.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/models/dashboard-model.js", 
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

	web_url("data-service.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/services/data-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t74.inf", 
		"LAST");

	web_url("agency-service.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/services/agency-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t75.inf", 
		"LAST");

	web_url("http-interceptor.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/services/http-interceptor.js", 
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

	web_url("slideout-service.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/services/slideout-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t82.inf", 
		"LAST");

	web_url("user-manager.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/services/user-manager.js", 
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

	web_url("module.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/module.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t85.inf", 
		"LAST");

	web_url("classic-admin-controller.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/admin/classic-admin-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t86.inf", 
		"LAST");

	web_url("automation-controller.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/automation-controller.js", 
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

	web_url("space-context-menu.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/directives/space-context-menu.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t91.inf", 
		"LAST");

	web_url("main-menu-flyout.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/directives/main-menu-flyout.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t92.inf", 
		"LAST");

	web_url("space-list.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/directives/space-list.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t93.inf", 
		"LAST");

	web_url("space-manager.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/services/space-manager.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t94.inf", 
		"LAST");

	web_url("space-repository.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/services/space-repository.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t95.inf", 
		"LAST");

	web_url("space-icon-factory.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/services/space-icon-factory.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t96.inf", 
		"LAST");

	web_url("server-session-service.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/services/server-session-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t97.inf", 
		"LAST");

	web_url("agency-switch.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/directives/agency-switch.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t98.inf", 
		"LAST");

	web_url("launchpad-controller.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/dashboard/launchpad/controllers/launchpad-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t99.inf", 
		"LAST");

	web_url("favorite-pages-toggle.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/dashboard/launchpad/directives/favorite-pages-toggle.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t100.inf", 
		"LAST");

	web_url("launchpad-manager.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/dashboard/launchpad/services/launchpad-manager.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t101.inf", 
		"LAST");

	web_url("portlet-session-state.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/services/portlet-session-state.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t102.inf", 
		"LAST");

	web_url("task-dashboard-controller.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/dashboard/task/controllers/task-dashboard-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t103.inf", 
		"LAST");

	web_url("module.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/dashboard/module.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t104.inf", 
		"LAST");

	web_url("task-card-menu.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/dashboard/task/directives/task-card-menu.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t105.inf", 
		"LAST");

	web_url("task-card-condition.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/dashboard/task/directives/task-card-condition.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t106.inf", 
		"LAST");

	web_url("task-flyout-toggle.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/dashboard/task/directives/task-flyout-toggle.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t107.inf", 
		"LAST");

	web_url("task-filter.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/dashboard/task/directives/task-filter.js", 
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

	web_url("professional-pagination-controller.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/globalsearch/controllers/professional-pagination-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t117.inf", 
		"LAST");

	web_url("record-pagination-controller.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/automation/globalsearch/controllers/record-pagination-controller.js", 
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

	web_url("RoboHelp_CSH.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/lib/RoboHelp_CSH.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t122.inf", 
		"LAST");

	web_url("ng-sortable.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/lib/custom/ng-sortable.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t123.inf", 
		"LAST");

	web_url("dirPagination.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/lib/custom/dirPagination.js", 
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

	web_url("compiled.tpl.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/templates/compiled.tpl.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t127.inf", 
		"LAST");

	web_url("popover.tpl.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/templates/popover.tpl.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t128.inf", 
		"LAST");

	web_url("keepalive.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/core/controllers/keepalive.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t129.inf", 
		"LAST");

	web_url("ajax-loader.gif", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/reskin/ajax-loader.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t130.inf", 
		"LAST");

	lr_think_time(6);

	web_custom_request("text.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/text.do?mode=localizedText", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t131.inf", 
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

	web_url("switchAgency.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/switchAgency.do?mode=list", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t132.inf", 
		"LAST");

	web_url("switchAgency.do_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/switchAgency.do?mode=init", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t133.inf", 
		"LAST");

	web_url("favicon.ico_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/favicon.ico", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t134.inf", 
		"LAST");

	web_url("userSecurityProfile.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/userSecurityProfile.do?mode=getSecurityProfileByModule&items=0375", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t135.inf", 
		"LAST");

	web_url("icon-space-pin.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/menubar/icon-space-pin.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t136.inf", 
		"LAST");

	web_url("icon-space-pin-dark.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/menubar/icon-space-pin-dark.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t137.inf", 
		"LAST");

	web_url("spacesMenu.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/spacesMenu.do?mode=list", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t138.inf", 
		"LAST");

	web_custom_request("userinfo.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/user/userinfo.do?mode=userInfo", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t139.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=utf-8", 
		"Body={}", 
		"LAST");

	web_url("glyphicons-halflings-regular.eot", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/styles/fonts/glyphicons-halflings-regular.eot?", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t140.inf", 
		"LAST");

	web_url("userSecurityProfile.do_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/userSecurityProfile.do?mode=getSecurityProfileByModule&items=0008,8488,8143,8400,8145,8144,8478,8213,8477,8487,8132", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t141.inf", 
		"LAST");

	web_url("icon-settings.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/icon-settings.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t142.inf", 
		"LAST");

	web_url("launchPad.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/launchPad.do?mode=getUserPages", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t143.inf", 
		"LAST");

	web_url("icon-search-inactive.svg", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/menubar/icon-search-inactive.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t144.inf", 
		"LAST");

	web_url("icon-alert.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/icon-alert.png", 
		"Resource=1", 
		"RecContentType=image/png", 
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

	web_url("recentlyViewed.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/recentlyViewed.do?mode=getRecentlyViewedItems", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t147.inf", 
		"LAST");

	web_url("menu_people_icon_dark.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/space-icons/menu_people_icon_dark.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t148.inf", 
		"LAST");

	web_url("menu_location_icon.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/space-icons/menu_location_icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t149.inf", 
		"LAST");

	web_url("menu_assets_icon.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/space-icons/menu_assets_icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t150.inf", 
		"LAST");

	web_url("icon-dashboard-tasks-inactive.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/menubar/icon-dashboard-tasks-inactive.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t151.inf", 
		"LAST");

	web_url("icon-dashboard-tasks-active.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/menubar/icon-dashboard-tasks-active.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t152.inf", 
		"LAST");

	web_url("icon-dashboard-map-active.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/menubar/icon-dashboard-map-active.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t153.inf", 
		"LAST");

	web_url("icon-add.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/launchpad/icon-add.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t154.inf", 
		"LAST");

	web_url("no-tasks.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/task/no-tasks.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t155.inf", 
		"LAST");

	web_url("session.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.mytask-list", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t156.inf", 
		"LAST");

	web_url("icon-expand.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/icon-expand.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t157.inf", 
		"LAST");

	web_url("icon-star.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/launchpad/icon-star.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t158.inf", 
		"LAST");

	web_url("favoritePages.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/favoritePages.do?mode=list", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t159.inf", 
		"LAST");

	web_url("switchAgency.do_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/switchAgency.do?mode=setAgency&serviceProviderCode=FLAGSTAFF", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t160.inf", 
		"LAST");

	web_url("getTaskFilterStatusList.json", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/mock-api/getTaskFilterStatusList.json", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t161.inf", 
		"LAST");

	web_url("icon-grabber.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/launchpad/icon-grabber.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t162.inf", 
		"LAST");

	web_url("dashboardTaskQuickQueries.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboardTaskQuickQueries.do", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t163.inf", 
		"LAST");

	web_url("dashboardTaskCards.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboardTaskCards.do?mode=multiAgencyTaskCounts&quickQueryId=", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t164.inf", 
		"LAST");

	web_url("icon-favorite.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/launchpad/icon-favorite.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t165.inf", 
		"LAST");

	web_url("dashboardTaskCards.do_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboardTaskCards.do?end=6&mode=initTask&serviceProviderCode=FLAGSTAFF&start=1", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t166.inf", 
		"LAST");

	web_url("icon-toggle.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/task/icon-toggle.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t167.inf", 
		"LAST");

	web_url("icon-menu-arrow-down.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/icon-menu-arrow-down.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t168.inf", 
		"LAST");

	web_url("icon-listview-inactive.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/menubar/icon-listview-inactive.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t169.inf", 
		"LAST");

	web_url("icon-cardview-active.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/menubar/icon-cardview-active.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t170.inf", 
		"LAST");

	web_url("icon-notice.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/task/icon-notice.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t171.inf", 
		"LAST");

	lr_end_transaction("Login",2);

	lr_think_time(12);

	lr_start_transaction("TC3_4_Click_Addresses");

	web_url("session.do_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t172.inf", 
		"LAST");

	web_url("icon-space-expanded.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/menubar/icon-space-expanded.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t173.inf", 
		"LAST");

	web_url("recentlyViewed.do_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/recentlyViewed.do?mode=getRecentlyViewedItems", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t174.inf", 
		"LAST");

	web_url("session.do_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.mytask-list", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t175.inf", 
		"LAST");

	lr_think_time(6);

	web_url("session.do_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t176.inf", 
		"LAST");

	web_url("session.do_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14041", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t177.inf", 
		"LAST");

	web_url("icon-space-context-menu.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/menubar/icon-space-context-menu.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t178.inf", 
		"LAST");

	web_url("refAddress.jsp", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/address/refAddress.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t179.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("portlet-iframe-content.css", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/styles/portlet-iframe-content.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/address/refAddress.jsp", 
		"Snapshot=t180.inf", 
		"LAST");

	web_url("blank.jsp", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/address/refAddress.jsp", 
		"Snapshot=t181.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("blank.jsp_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/address/refAddress.jsp", 
		"Snapshot=t182.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("blank.jsp_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/address/refAddress.jsp", 
		"Snapshot=t183.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("blank.jsp_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/address/refAddress.jsp", 
		"Snapshot=t184.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("blank.jsp_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/address/refAddress.jsp", 
		"Snapshot=t185.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("ac360base.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t186.inf", 
		"LAST");

	web_url("refAddressList.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/address/refAddress.jsp", 
		"Snapshot=t187.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("jquery-1.11.0.min.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t188.inf", 
		"LAST");

	web_url("windowCloseOverride.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/js/lib/windowCloseOverride.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t189.inf", 
		"LAST");

	web_url("Ac360ToolManager.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t190.inf", 
		"LAST");

	web_url("widget.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/widget/widget.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t191.inf", 
		"LAST");

	web_url("ac360InputBoxHotKey.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360InputBoxHotKey.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t192.inf", 
		"LAST");

	web_url("ac360.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t193.inf", 
		"LAST");

	web_url("popup.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/popup/popup.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t194.inf", 
		"LAST");

	web_url("memoryLeakPatch.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/memoryLeakPatch.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t195.inf", 
		"LAST");

	web_url("ac360base.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t196.inf", 
		"LAST");

	web_url("masked.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/masked.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t197.inf", 
		"LAST");

	web_url("styles.css", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/sky_blue/styles.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t198.inf", 
		"LAST");

	web_url("myTask.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/myTask.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t199.inf", 
		"LAST");

	web_url("re-skin-v2.css", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/styles/re-skin-v2.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t200.inf", 
		"LAST");

	web_url("bootstrap.css", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/styles/bootstrap/bootstrap.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t201.inf", 
		"LAST");

	web_url("print-styles.css", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/sky_blue/print-styles.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t202.inf", 
		"LAST");

	web_url("opos.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/opos.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t203.inf", 
		"LAST");

	web_url("menubar.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/menubar.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t204.inf", 
		"LAST");

	web_url("AAHELP.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/docs/AAHELP.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t205.inf", 
		"LAST");

	web_url("watermark.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/watermark.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t206.inf", 
		"LAST");

	web_url("ajaxAnyWhere.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ajaxAnyWhere.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t207.inf", 
		"LAST");

	web_url("genericMask.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/taglib/genericMask/javascript/genericMask.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t208.inf", 
		"LAST");

	web_url("spellchecker-caller.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/spellchecker/spellchecker-caller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t209.inf", 
		"LAST");

	web_url("layoutPublic.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/layoutPublic.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t210.inf", 
		"LAST");

	web_url("selectDate.gif", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/selectDate.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t211.inf", 
		"LAST");

	web_url("soundex.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/soundex.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t212.inf", 
		"LAST");

	web_url("hashMap.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t213.inf", 
		"LAST");

	web_url("ac360ui.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t214.inf", 
		"LAST");

	web_url("ac360ScrollBar.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t215.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t216.inf", 
		"LAST");

	web_url("I18N.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t217.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t218.inf", 
		"LAST");

	web_url("checkTextAreaLength.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/checkTextAreaLength.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t219.inf", 
		"LAST");

	web_url("popUp.css", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/sky_blue/popUp.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t220.inf", 
		"LAST");

	web_url("I18N.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t221.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t222.inf", 
		"LAST");

	web_url("I18N.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t223.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t224.inf", 
		"LAST");

	web_url("I18N.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t225.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t226.inf", 
		"LAST");

	web_url("blank.jsp_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t227.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("I18N.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t228.inf", 
		"LAST");

	web_url("refresh.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/reskin/refresh.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t229.inf", 
		"LAST");

	web_url("Drop_Menu_Button_Default.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/reskin/Drop_Menu_Button_Default.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t230.inf", 
		"LAST");

	web_url("ac360base.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t231.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t232.inf", 
		"LAST");

	web_url("jquery-1.11.0.min.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t233.inf", 
		"LAST");

	web_url("blank.jsp_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/address/refAddress.jsp", 
		"Snapshot=t234.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("I18N.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t235.inf", 
		"LAST");

	web_url("hashMap.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t236.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t237.inf", 
		"LAST");

	web_url("ac360base.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t238.inf", 
		"LAST");

	web_url("ac360ui.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t239.inf", 
		"LAST");

	web_url("I18N.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t240.inf", 
		"LAST");

	web_url("jquery-1.11.0.min.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t241.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t242.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t243.inf", 
		"LAST");

	web_url("hashMap.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t244.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t245.inf", 
		"LAST");

	web_url("ac360ui.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t246.inf", 
		"LAST");

	web_url("Map.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Map.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t247.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t248.inf", 
		"LAST");

	web_url("calendar_medium.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/reskin/calendar_medium.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t249.inf", 
		"LAST");

	web_submit_data("empty.jsp", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t250.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t251.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_2", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t252.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_3", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&getMsg=Y", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t253.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_url("Ac360ToolManager.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t254.inf", 
		"LAST");

	web_url("session.do_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14041", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t255.inf", 
		"LAST");

	web_url("session.do_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14041", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t256.inf", 
		"LAST");

	lr_end_transaction("TC3_4_Click_Addresses",2);

	lr_think_time(9);

	lr_start_transaction("TC3_5_Search_Addresses");

	web_url("session.do_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14041", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t257.inf", 
		"LAST");

	web_url("session.do_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14041", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t258.inf", 
		"LAST");

	lr_think_time(10);

	web_url("session.do_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14041", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t259.inf", 
		"LAST");

	lr_think_time(5);

	web_url("session.do_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14041", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t260.inf", 
		"LAST");

	lr_think_time(5);

	web_url("countryStateAJAX.jsp", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/address/countryStateAJAX.jsp?stateProperty=value(state)&stateReadOnly=false&country=US&aaxmlrequest=true&aa_rand=0.9470629870607121&aazones=aazone-country-state", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t261.inf", 
		"Mode=HTTP", 
		"LAST");

	web_submit_data("regionalSyncMask.do_4", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=US", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t262.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	lr_think_time(7);

	web_submit_data("refAddressList.do_2", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t263.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=value(FirstEntryURL)", "Value=/portlets/address/refAddressList.do?mode=Search", "ENDITEM", 
		"Name=value(CurrentEntryURL)", "Value=/portlets/address/refAddressList.do?mode=Search", "ENDITEM", 
		"Name=portlet_language", "Value=en_US", "ENDITEM", 
		"Name=refresh_target", "Value=", "ENDITEM", 
		"Name=refresh_url", "Value=", "ENDITEM", 
		"Name=buttonName", "Value=", "ENDITEM", 
		"Name=modeName", "Value=Search", "ENDITEM", 
		"Name=module", "Value=Building", "ENDITEM", 
		"Name=accelasubmitbuttonname", "Value=search", "ENDITEM", 
		"Name=itemName", "Value=", "ENDITEM", 
		"Name=CurrentViewID", "Value=31", "ENDITEM", 
		"Name=exceptionLogID", "Value=", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=value(portlet_soundex)", "Value=off", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=31", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=OI+x0hdJ0Pv1Z+Kh5Fl1bVvX", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=listBySingle", "Value=null", "ENDITEM", 
		"Name=value(mode)", "Value=SearchResult", "ENDITEM", 
		"Name=value(contactSeqNumber)", "Value=", "ENDITEM", 
		"Name=autoSelect", "Value=null", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(serviceProviderCode)", "Value=", "ENDITEM", 
		"Name=value(search_range_from_houseNumberStart)", "Value=", "ENDITEM", 
		"Name=value(search_range_to_houseNumberStart)", "Value=", "ENDITEM", 
		"Name=value(search_range_houseNumberStart)", "Value=", "ENDITEM", 
		"Name=value(houseNumberAlphaStart)", "Value=", "ENDITEM", 
		"Name=value(houseNumberAlphaEnd)", "Value=", "ENDITEM", 
		"Name=value(levelPrefix)", "Value=", "ENDITEM", 
		"Name=value(levelNumberStart)", "Value=", "ENDITEM", 
		"Name=value(levelNumberEnd)", "Value=", "ENDITEM", 
		"Name=value(unitStart)", "Value=", "ENDITEM", 
		"Name=value(unitEnd)", "Value=", "ENDITEM", 
		"Name=value(city)", "Value=", "ENDITEM", 
		"Name=value(auditStatus)", "Value=", "ENDITEM", 
		"Name=value(XCoordinator)", "Value=", "ENDITEM", 
		"Name=value(YCoordinator)", "Value=", "ENDITEM", 
		"Name=value(distance)", "Value=", "ENDITEM", 
		"Name=value(secondaryRoadNumber)", "Value=", "ENDITEM", 
		"Name=value(sourceNumber)", "Value=", "ENDITEM", 
		"Name=value(sourceFlag)", "Value=", "ENDITEM", 
		"Name=value(addressTypeFlag)", "Value=", "ENDITEM", 
		"Name=value(validateFlag)", "Value=", "ENDITEM", 
		"Name=value(streetPrefix)", "Value=", "ENDITEM", 
		"Name=value(secondaryRoad)", "Value=", "ENDITEM", 
		"Name=value(inspectionDistrictPrefix)", "Value=", "ENDITEM", 
		"Name=value(inspectionDistrict)", "Value=", "ENDITEM", 
		"Name=value(neighberhoodPrefix)", "Value=", "ENDITEM", 
		"Name=value(neighborhood)", "Value=", "ENDITEM", 
		"Name=value(eventID)", "Value=", "ENDITEM", 
		"Name=value(refAddressId)", "Value=", "ENDITEM", 
		"Name=value(houseFractionStart)", "Value=", "ENDITEM", 
		"Name=value(houseFractionEnd)", "Value=", "ENDITEM", 
		"Name=value(auditID)", "Value=", "ENDITEM", 
		"Name=date(auditDate)", "Value=", "ENDITEM", 
		"Name=value(fullAddress)", "Value=", "ENDITEM", 
		"Name=value(subdivision)", "Value=", "ENDITEM", 
		"Name=value(lot)", "Value=", "ENDITEM", 
		"Name=isNewSearch", "Value=true", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(search_range_from_houseNumberEnd)", "Value=", "ENDITEM", 
		"Name=value(search_range_to_houseNumberEnd)", "Value=", "ENDITEM", 
		"Name=value(search_range_houseNumberEnd)", "Value=", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(streetName)", "Value=", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(streetNameStart)", "Value=", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(streetNameEnd)", "Value=", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(locationType)", "Value=", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(streetSuffix)", "Value=", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(streetDirection)", "Value=", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(primaryFlag)", "Value=", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(addressType)", "Value=", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(streetSuffixdirection)", "Value=", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(state)", "Value=", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(countryCode)", "Value=US", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(county)", "Value=", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(unitType)", "Value=", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(zip_disp)", "Value=", "ENDITEM", 
		"Name=value(zip)", "Value=", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(crossStreetNameStart)", "Value=", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(crossStreetNameEnd)", "Value=", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(addressDescription)", "Value=", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(addressLine1)", "Value=", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(addressLine2)", "Value=", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=template_ADDRESS_EVENT_START_DATE", "Value=", "ENDITEM", 
		"Name=template_ADDRESS_EVENT_END_DATE", "Value=", "ENDITEM", 
		"Name=template_ADDRESS_MONTH", "Value=", "ENDITEM", 
		"Name=template_ADDRESS_FIELD1", "Value=", "ENDITEM", 
		"Name=template_ADDRESS_FIELD2", "Value=", "ENDITEM", 
		"Name=value(refAddressId)", "Value=", "ENDITEM", 
		"Name=value(sourceNumber)", "Value=", "ENDITEM", 
		"LAST");

	web_url("ac360base.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t264.inf", 
		"LAST");

	web_url("jquery-1.11.0.min.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t265.inf", 
		"LAST");

	web_url("widget.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/widget/widget.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t266.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t267.inf", 
		"LAST");

	web_url("myTask.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/myTask.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t268.inf", 
		"LAST");

	web_url("ac360.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t269.inf", 
		"LAST");

	web_url("AAHELP.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/docs/AAHELP.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t270.inf", 
		"LAST");

	web_url("ac360InputBoxHotKey.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360InputBoxHotKey.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t271.inf", 
		"LAST");

	web_url("masked.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/masked.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t272.inf", 
		"LAST");

	web_url("opos.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/opos.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t273.inf", 
		"LAST");

	web_url("popup.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/popup/popup.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t274.inf", 
		"LAST");

	web_url("Previous_Button_Grayed_Out.jpg", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/sky_blue/menu/Previous_Button_Grayed_Out.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t275.inf", 
		"LAST");

	web_url("watermark.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/watermark.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t276.inf", 
		"LAST");

	web_url("memoryLeakPatch.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/memoryLeakPatch.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t277.inf", 
		"LAST");

	web_url("menubar.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/menubar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t278.inf", 
		"LAST");

	web_url("dojo.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/dojo.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t279.inf", 
		"LAST");

	web_url("commonConditionUtil.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/condition/commonConditionUtil.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t280.inf", 
		"LAST");

	web_url("layoutPublic.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/layoutPublic.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t281.inf", 
		"LAST");

	web_url("Next_Button_Default.jpg", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/sky_blue/menu/Next_Button_Default.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t282.inf", 
		"LAST");

	web_url("hashMap.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t283.inf", 
		"LAST");

	web_url("ac360ui.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t284.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t285.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t286.inf", 
		"LAST");

	web_url("I18N.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t287.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t288.inf", 
		"LAST");

	web_url("checkTextAreaLength.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/checkTextAreaLength.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t289.inf", 
		"LAST");

	web_url("I18N.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t290.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t291.inf", 
		"LAST");

	web_url("I18N.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t292.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t293.inf", 
		"LAST");

	web_url("I18N.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t294.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t295.inf", 
		"LAST");

	web_url("blank.jsp_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t296.inf", 
		"Mode=HTTP", 
		"LAST");

	web_custom_request("refAddressForm.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressForm.do?mode=viewCondition&module=Building&addressId=926449413", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t297.inf", 
		"Mode=HTTP", 
		"Body=value(FirstEntryURL)=%2Fportlets%2Faddress%2FrefAddressList.do%3Fmode%3DSearch&value(CurrentEntryURL)=%2Fportlets%2Faddress%2FrefAddressList.do%3Fmodule%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=search&modeName=&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=7&exceptionLogID=&generalCAPSearch=&value(selectedQuickQuery)=&gisPortletName=&value(source)=&value(initMap)=&objectName=refAddresses&CheckBoxName=&MaxNumber=&ExportFileType=print&"
		"CurrentViewID=7&sessionIdFromWindow=OI%2Bx0hdJ0Pv1Z%2BKh5Fl1bVvX&listID=&printType=&checkBoxValue=&isDynaPaging=true&page-navigator-input-id=1&926449412%7C20=408%20Maria%20Dr%2C%20%20Petaluma%2C%20California%2094954&value(addressLine1)=&value(addressLine2)=&926449413%7C20=424%20Maria%20Dr%2C%20%20Petaluma%2C%20California%2094954&value(addressLine1)=&value(addressLine2)=&926449414%7C20=324%20Maria%20Dr%2C%20%20Petaluma%2C%20California%2094954&value(addressLine1)=&value(addressLine2)=&926449513%7C20"
		"=1703%20Poppy%20Ct%2C%20%20Petaluma%2C%20California%2094954&value(addressLine1)=&value(addressLine2)=&926449521%7C20=1445%20N%20McDowell%20Blvd%2C%20%20Petaluma%2C%20California%2094954&value(addressLine1)=&value(addressLine2)=&pageSizeR=5&", 
		"LAST");

	web_custom_request("refAddressForm.do_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressForm.do?mode=viewCondition&module=Building&addressId=926449412", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t298.inf", 
		"Mode=HTTP", 
		"Body=value(FirstEntryURL)=%2Fportlets%2Faddress%2FrefAddressList.do%3Fmode%3DSearch&value(CurrentEntryURL)=%2Fportlets%2Faddress%2FrefAddressList.do%3Fmodule%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=search&modeName=&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=7&exceptionLogID=&generalCAPSearch=&value(selectedQuickQuery)=&gisPortletName=&value(source)=&value(initMap)=&objectName=refAddresses&CheckBoxName=&MaxNumber=&ExportFileType=print&"
		"CurrentViewID=7&sessionIdFromWindow=OI%2Bx0hdJ0Pv1Z%2BKh5Fl1bVvX&listID=&printType=&checkBoxValue=&isDynaPaging=true&page-navigator-input-id=1&926449412%7C20=408%20Maria%20Dr%2C%20%20Petaluma%2C%20California%2094954&value(addressLine1)=&value(addressLine2)=&926449413%7C20=424%20Maria%20Dr%2C%20%20Petaluma%2C%20California%2094954&value(addressLine1)=&value(addressLine2)=&926449414%7C20=324%20Maria%20Dr%2C%20%20Petaluma%2C%20California%2094954&value(addressLine1)=&value(addressLine2)=&926449513%7C20"
		"=1703%20Poppy%20Ct%2C%20%20Petaluma%2C%20California%2094954&value(addressLine1)=&value(addressLine2)=&926449521%7C20=1445%20N%20McDowell%20Blvd%2C%20%20Petaluma%2C%20California%2094954&value(addressLine1)=&value(addressLine2)=&pageSizeR=5&", 
		"LAST");

	web_url("Map.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Map.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t299.inf", 
		"LAST");

	web_url("ac360base.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t300.inf", 
		"LAST");

	web_custom_request("refAddressForm.do_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressForm.do?mode=viewCondition&module=Building&addressId=926449513", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t301.inf", 
		"Mode=HTTP", 
		"Body=value(FirstEntryURL)=%2Fportlets%2Faddress%2FrefAddressList.do%3Fmode%3DSearch&value(CurrentEntryURL)=%2Fportlets%2Faddress%2FrefAddressList.do%3Fmodule%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=search&modeName=&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=7&exceptionLogID=&generalCAPSearch=&value(selectedQuickQuery)=&gisPortletName=&value(source)=&value(initMap)=&objectName=refAddresses&CheckBoxName=&MaxNumber=&ExportFileType=print&"
		"CurrentViewID=7&sessionIdFromWindow=OI%2Bx0hdJ0Pv1Z%2BKh5Fl1bVvX&listID=&printType=&checkBoxValue=&isDynaPaging=true&page-navigator-input-id=1&926449412%7C20=408%20Maria%20Dr%2C%20%20Petaluma%2C%20California%2094954&value(addressLine1)=&value(addressLine2)=&926449413%7C20=424%20Maria%20Dr%2C%20%20Petaluma%2C%20California%2094954&value(addressLine1)=&value(addressLine2)=&926449414%7C20=324%20Maria%20Dr%2C%20%20Petaluma%2C%20California%2094954&value(addressLine1)=&value(addressLine2)=&926449513%7C20"
		"=1703%20Poppy%20Ct%2C%20%20Petaluma%2C%20California%2094954&value(addressLine1)=&value(addressLine2)=&926449521%7C20=1445%20N%20McDowell%20Blvd%2C%20%20Petaluma%2C%20California%2094954&value(addressLine1)=&value(addressLine2)=&pageSizeR=5&", 
		"LAST");

	web_custom_request("refAddressForm.do_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressForm.do?mode=viewCondition&module=Building&addressId=926449414", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t302.inf", 
		"Mode=HTTP", 
		"Body=value(FirstEntryURL)=%2Fportlets%2Faddress%2FrefAddressList.do%3Fmode%3DSearch&value(CurrentEntryURL)=%2Fportlets%2Faddress%2FrefAddressList.do%3Fmodule%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=search&modeName=&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=7&exceptionLogID=&generalCAPSearch=&value(selectedQuickQuery)=&gisPortletName=&value(source)=&value(initMap)=&objectName=refAddresses&CheckBoxName=&MaxNumber=&ExportFileType=print&"
		"CurrentViewID=7&sessionIdFromWindow=OI%2Bx0hdJ0Pv1Z%2BKh5Fl1bVvX&listID=&printType=&checkBoxValue=&isDynaPaging=true&page-navigator-input-id=1&926449412%7C20=408%20Maria%20Dr%2C%20%20Petaluma%2C%20California%2094954&value(addressLine1)=&value(addressLine2)=&926449413%7C20=424%20Maria%20Dr%2C%20%20Petaluma%2C%20California%2094954&value(addressLine1)=&value(addressLine2)=&926449414%7C20=324%20Maria%20Dr%2C%20%20Petaluma%2C%20California%2094954&value(addressLine1)=&value(addressLine2)=&926449513%7C20"
		"=1703%20Poppy%20Ct%2C%20%20Petaluma%2C%20California%2094954&value(addressLine1)=&value(addressLine2)=&926449521%7C20=1445%20N%20McDowell%20Blvd%2C%20%20Petaluma%2C%20California%2094954&value(addressLine1)=&value(addressLine2)=&pageSizeR=5&", 
		"LAST");

	web_custom_request("refAddressForm.do_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressForm.do?mode=viewCondition&module=Building&addressId=926449521", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t303.inf", 
		"Mode=HTTP", 
		"Body=value(FirstEntryURL)=%2Fportlets%2Faddress%2FrefAddressList.do%3Fmode%3DSearch&value(CurrentEntryURL)=%2Fportlets%2Faddress%2FrefAddressList.do%3Fmodule%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=search&modeName=&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=7&exceptionLogID=&generalCAPSearch=&value(selectedQuickQuery)=&gisPortletName=&value(source)=&value(initMap)=&objectName=refAddresses&CheckBoxName=&MaxNumber=&ExportFileType=print&"
		"CurrentViewID=7&sessionIdFromWindow=OI%2Bx0hdJ0Pv1Z%2BKh5Fl1bVvX&listID=&printType=&checkBoxValue=&isDynaPaging=true&page-navigator-input-id=1&926449412%7C20=408%20Maria%20Dr%2C%20%20Petaluma%2C%20California%2094954&value(addressLine1)=&value(addressLine2)=&926449413%7C20=424%20Maria%20Dr%2C%20%20Petaluma%2C%20California%2094954&value(addressLine1)=&value(addressLine2)=&926449414%7C20=324%20Maria%20Dr%2C%20%20Petaluma%2C%20California%2094954&value(addressLine1)=&value(addressLine2)=&926449513%7C20"
		"=1703%20Poppy%20Ct%2C%20%20Petaluma%2C%20California%2094954&value(addressLine1)=&value(addressLine2)=&926449521%7C20=1445%20N%20McDowell%20Blvd%2C%20%20Petaluma%2C%20California%2094954&value(addressLine1)=&value(addressLine2)=&pageSizeR=5&", 
		"LAST");

	lr_think_time(4);

	web_submit_data("empty.jsp_2", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t304.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_url("jquery-1.11.0.min.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t305.inf", 
		"LAST");

	web_url("hashMap.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t306.inf", 
		"LAST");

	web_url("ac360ui.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t307.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t308.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t309.inf", 
		"LAST");

	web_url("table-header-left-top-200-8.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/sky_blue/menu/table-header-left-top-200-8.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t310.inf", 
		"LAST");

	web_url("table-footer-right-bottom-400-12.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/sky_blue/menu/table-footer-right-bottom-400-12.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t311.inf", 
		"LAST");

	web_url("table-header-right-top-400-8.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/sky_blue/menu/table-header-right-top-400-8.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t312.inf", 
		"LAST");

	web_url("table-footer-left-bottom-200-12.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/sky_blue/menu/table-footer-left-bottom-200-12.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t313.inf", 
		"LAST");

	web_url("session.do_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14041", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t314.inf", 
		"LAST");

	lr_end_transaction("TC3_5_Search_Addresses",2);

	lr_think_time(11);

	web_url("session.do_13", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14041", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t315.inf", 
		"LAST");

	lr_think_time(4);

	lr_start_transaction("TC3_9_Click_Parcel");

	web_url("left-hover.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/sky_blue/menu/left-hover.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t316.inf", 
		"LAST");

	web_url("Drop_Menu_Button_Hover.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/reskin/Drop_Menu_Button_Hover.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t317.inf", 
		"LAST");

	web_url("session.do_14", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14041", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t318.inf", 
		"LAST");

	web_url("session.do_15", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t319.inf", 
		"LAST");

	web_url("recentlyViewed.do_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/recentlyViewed.do?mode=getRecentlyViewedItems", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t320.inf", 
		"LAST");

	web_url("session.do_16", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14041", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t321.inf", 
		"LAST");

	lr_think_time(6);

	web_url("session.do_17", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t322.inf", 
		"LAST");

	web_url("session.do_18", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14042", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t323.inf", 
		"LAST");

	web_url("refParcel.jsp", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/parcel/refParcel.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t324.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("ac360base.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/parcel/refParcel.jsp", 
		"Snapshot=t325.inf", 
		"LAST");

	web_url("jquery-1.11.0.min.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/parcel/refParcel.jsp", 
		"Snapshot=t326.inf", 
		"LAST");

	web_url("hashMap.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/parcel/refParcel.jsp", 
		"Snapshot=t327.inf", 
		"LAST");

	web_url("ac360ui.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/parcel/refParcel.jsp", 
		"Snapshot=t328.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/parcel/refParcel.jsp", 
		"Snapshot=t329.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/parcel/refParcel.jsp", 
		"Snapshot=t330.inf", 
		"LAST");

	web_url("blank.jsp_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/parcel/refParcel.jsp", 
		"Snapshot=t331.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("refParcelList.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/parcel/refParcel.jsp", 
		"Snapshot=t332.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("ac360base.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t333.inf", 
		"LAST");

	web_url("blank.jsp_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/parcel/refParcel.jsp", 
		"Snapshot=t334.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("ac360.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t335.inf", 
		"LAST");

	web_url("widget.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/widget/widget.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t336.inf", 
		"LAST");

	web_url("ac360InputBoxHotKey.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360InputBoxHotKey.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t337.inf", 
		"LAST");

	web_url("memoryLeakPatch.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/memoryLeakPatch.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t338.inf", 
		"LAST");

	web_url("myTask.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/myTask.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t339.inf", 
		"LAST");

	web_url("jquery-1.11.0.min.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t340.inf", 
		"LAST");

	web_url("layoutPublic.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/layoutPublic.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t341.inf", 
		"LAST");

	web_url("opos.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/opos.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t342.inf", 
		"LAST");

	web_url("popup.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/popup/popup.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t343.inf", 
		"LAST");

	web_url("menubar.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/menubar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t344.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t345.inf", 
		"LAST");

	web_url("masked.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/masked.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t346.inf", 
		"LAST");

	web_url("ajaxAnyWhere.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ajaxAnyWhere.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t347.inf", 
		"LAST");

	web_url("watermark.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/watermark.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t348.inf", 
		"LAST");

	web_url("spellchecker-caller.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/spellchecker/spellchecker-caller.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t349.inf", 
		"LAST");

	web_url("AAHELP.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/docs/AAHELP.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t350.inf", 
		"LAST");

	web_url("hashMap.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t351.inf", 
		"LAST");

	web_url("ac360ui.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t352.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t353.inf", 
		"LAST");

	lr_think_time(4);

	web_url("Ac360ToolManager.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t354.inf", 
		"LAST");

	web_url("I18N.js_13", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t355.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_13", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t356.inf", 
		"LAST");

	web_url("checkTextAreaLength.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/checkTextAreaLength.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t357.inf", 
		"LAST");

	web_url("I18N.js_14", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t358.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_14", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t359.inf", 
		"LAST");

	web_url("I18N.js_15", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t360.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_15", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t361.inf", 
		"LAST");

	web_url("I18N.js_16", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t362.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_16", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t363.inf", 
		"LAST");

	web_url("blank.jsp_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t364.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("I18N.js_17", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t365.inf", 
		"LAST");

	web_url("ac360base.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t366.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_17", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t367.inf", 
		"LAST");

	web_url("jquery-1.11.0.min.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t368.inf", 
		"LAST");

	web_url("subdivisionLot.jsp", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/parcel/subdivisionLot.jsp?subdivision=&lotName=value(parcel*lot)&lotValue=&autoGet=false&aaxmlrequest=true&aa_rand=0.6385214045872161&aazones=aazone-parcel-lot", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t369.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("hashMap.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t370.inf", 
		"LAST");

	web_url("Map.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Map.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t371.inf", 
		"LAST");

	web_url("ac360ui.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t372.inf", 
		"LAST");

	web_submit_data("empty.jsp_3", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t373.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_url("ac360ScrollBar.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t374.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t375.inf", 
		"LAST");

	web_url("session.do_19", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14042", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t376.inf", 
		"LAST");

	lr_end_transaction("TC3_9_Click_Parcel",2);

	lr_think_time(9);

	lr_start_transaction("TC3_10_Search_Parcel");

	web_url("session.do_20", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14042", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t377.inf", 
		"LAST");

	web_submit_data("refParcelList.do_2", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t378.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=value(FirstEntryURL)", "Value=/portlets/parcel/refParcelList.do?mode=search&lookup=false", "ENDITEM", 
		"Name=value(CurrentEntryURL)", "Value=/portlets/parcel/refParcelList.do?mode=search&lookup=false", "ENDITEM", 
		"Name=portlet_language", "Value=en_US", "ENDITEM", 
		"Name=refresh_target", "Value=", "ENDITEM", 
		"Name=refresh_url", "Value=", "ENDITEM", 
		"Name=buttonName", "Value=", "ENDITEM", 
		"Name=modeName", "Value=search", "ENDITEM", 
		"Name=module", "Value=Building", "ENDITEM", 
		"Name=accelasubmitbuttonname", "Value=searchresult", "ENDITEM", 
		"Name=itemName", "Value=", "ENDITEM", 
		"Name=CurrentViewID", "Value=20037", "ENDITEM", 
		"Name=exceptionLogID", "Value=", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=value(portlet_soundex)", "Value=off", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=20037", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=OI+x0hdJ0Pv1Z+Kh5Fl1bVvX", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=fromCreateChild", "Value=null", "ENDITEM", 
		"Name=value(owner*ownerFullName)", "Value=", "ENDITEM", 
		"Name=isNewSearch", "Value=true", "ENDITEM", 
		"Name=value(parcel*parcelNumber)", "Value=", "ENDITEM", 
		"Name=value(parcel*parcelStatus)", "Value=", "ENDITEM", 
		"Name=value(search_range_from_address*houseNumberStart)", "Value=", "ENDITEM", 
		"Name=value(search_range_to_address*houseNumberStart)", "Value=", "ENDITEM", 
		"Name=value(search_range_address*houseNumberStart)", "Value=", "ENDITEM", 
		"Name=value(search_range_from_address*houseNumberEnd)", "Value=", "ENDITEM", 
		"Name=value(search_range_to_address*houseNumberEnd)", "Value=", "ENDITEM", 
		"Name=value(search_range_address*houseNumberEnd)", "Value=", "ENDITEM", 
		"Name=value(address*streetName)", "Value=", "ENDITEM", 
		"Name=value(address*unitStart)", "Value=", "ENDITEM", 
		"Name=value(address*unitEnd)", "Value=", "ENDITEM", 
		"Name=value(address*city)", "Value=", "ENDITEM", 
		"Name=value(address*streetDirection)", "Value=", "ENDITEM", 
		"Name=value(address*streetSuffix)", "Value=", "ENDITEM", 
		"Name=value(address*addressDescription)", "Value=", "ENDITEM", 
		"Name=value(parcel*subdivision)", "Value=", "ENDITEM", 
		"Name=value(parcel*primaryParcelFlagWithoutDealing)", "Value=Y", "ENDITEM", 
		"Name=value(parcel*lot)", "Value=", "ENDITEM", 
		"Name=value(parcel*township)", "Value=", "ENDITEM", 
		"Name=value(parcel*range)", "Value=", "ENDITEM", 
		"Name=value(parcel*section)", "Value=", "ENDITEM", 
		"Name=value(parcel*legalDesc)", "Value=", "ENDITEM", 
		"Name=value(address*levelPrefix)", "Value=", "ENDITEM", 
		"Name=value(address*levelNumberStart)", "Value=", "ENDITEM", 
		"Name=value(address*levelNumberEnd)", "Value=", "ENDITEM", 
		"Name=value(address*houseNumberAlphaStart)", "Value=", "ENDITEM", 
		"Name=value(address*houseNumberAlphaEnd)", "Value=", "ENDITEM", 
		"Name=value(address*locationType)", "Value=", "ENDITEM", 
		"Name=value(address*streetNameStart)", "Value=", "ENDITEM", 
		"Name=value(address*streetNameEnd)", "Value=", "ENDITEM", 
		"Name=value(address*crossStreetNameStart)", "Value=", "ENDITEM", 
		"Name=value(address*crossStreetNameEnd)", "Value=", "ENDITEM", 
		"Name=template_PARCEL_ROWM_END_DATE", "Value=", "ENDITEM", 
		"Name=template_PARCEL_ROWM_START_DATE", "Value=", "ENDITEM", 
		"Name=value(address*streetSuffixdirection)", "Value=", "ENDITEM", 
		"LAST");

	web_url("jquery-1.11.0.min.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t379.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t380.inf", 
		"LAST");

	web_url("ac360base.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t381.inf", 
		"LAST");

	web_url("watermark.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/watermark.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t382.inf", 
		"LAST");

	web_url("memoryLeakPatch.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/memoryLeakPatch.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t383.inf", 
		"LAST");

	web_url("dojo.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/dojo.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t384.inf", 
		"LAST");

	web_url("ac360InputBoxHotKey.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360InputBoxHotKey.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t385.inf", 
		"LAST");

	web_url("layoutPublic.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/layoutPublic.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t386.inf", 
		"LAST");

	web_url("opos.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/opos.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t387.inf", 
		"LAST");

	web_url("widget.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/widget/widget.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t388.inf", 
		"LAST");

	web_url("myTask.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/myTask.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t389.inf", 
		"LAST");

	web_url("ac360.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t390.inf", 
		"LAST");

	web_url("menubar.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/menubar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t391.inf", 
		"LAST");

	web_url("popup.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/popup/popup.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t392.inf", 
		"LAST");

	web_url("AAHELP.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/docs/AAHELP.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t393.inf", 
		"LAST");

	web_url("hashMap.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t394.inf", 
		"LAST");

	web_url("Next_Button_Grayed_Out.jpg", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/images/sky_blue/menu/Next_Button_Grayed_Out.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t395.inf", 
		"LAST");

	web_url("commonConditionUtil.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/condition/commonConditionUtil.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t396.inf", 
		"LAST");

	web_url("masked.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/masked.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t397.inf", 
		"LAST");

	web_url("ac360ui.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t398.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t399.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_13", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t400.inf", 
		"LAST");

	web_url("I18N.js_18", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t401.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_18", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t402.inf", 
		"LAST");

	web_url("checkTextAreaLength.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/checkTextAreaLength.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t403.inf", 
		"LAST");

	web_url("I18N.js_19", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t404.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_19", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t405.inf", 
		"LAST");

	web_url("I18N.js_20", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t406.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_20", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t407.inf", 
		"LAST");

	web_url("I18N.js_21", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t408.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_21", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t409.inf", 
		"LAST");

	web_url("blank.jsp_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t410.inf", 
		"Mode=HTTP", 
		"LAST");

	web_custom_request("refParcelForm.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelForm.do?mode=viewCondition&module=Building&refParcelNumber=10001", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t411.inf", 
		"Mode=HTTP", 
		"Body=value(FirstEntryURL)=%2Fportlets%2Fparcel%2FrefParcelList.do%3Fmode%3Dsearch%26lookup%3Dfalse&value(CurrentEntryURL)=%2Fportlets%2Fparcel%2FrefParcelList.do%3Fmodule%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=searchresult&modeName=&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=20035&exceptionLogID=&generalCAPSearch=&gisPortletName=&value(source)=&value(initMap)=&objectName=parcels&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID="
		"20035&sessionIdFromWindow=OI%2Bx0hdJ0Pv1Z%2BKh5Fl1bVvX&listID=&printType=&checkBoxValue=&isDynaPaging=true&page-navigator-input-id=1&uid=null&uid=null&uid=null&pageSizeR=5&", 
		"LAST");

	web_custom_request("refParcelForm.do_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelForm.do?mode=viewCondition&module=Building&refParcelNumber=111111", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t412.inf", 
		"Mode=HTTP", 
		"Body=value(FirstEntryURL)=%2Fportlets%2Fparcel%2FrefParcelList.do%3Fmode%3Dsearch%26lookup%3Dfalse&value(CurrentEntryURL)=%2Fportlets%2Fparcel%2FrefParcelList.do%3Fmodule%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=searchresult&modeName=&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=20035&exceptionLogID=&generalCAPSearch=&gisPortletName=&value(source)=&value(initMap)=&objectName=parcels&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID="
		"20035&sessionIdFromWindow=OI%2Bx0hdJ0Pv1Z%2BKh5Fl1bVvX&listID=&printType=&checkBoxValue=&isDynaPaging=true&page-navigator-input-id=1&uid=null&uid=null&uid=null&pageSizeR=5&", 
		"LAST");

	web_url("Map.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Map.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t413.inf", 
		"LAST");

	web_url("ac360base.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t414.inf", 
		"LAST");

	web_custom_request("refParcelForm.do_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelForm.do?mode=viewCondition&module=Building&refParcelNumber=10002", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t415.inf", 
		"Mode=HTTP", 
		"Body=value(FirstEntryURL)=%2Fportlets%2Fparcel%2FrefParcelList.do%3Fmode%3Dsearch%26lookup%3Dfalse&value(CurrentEntryURL)=%2Fportlets%2Fparcel%2FrefParcelList.do%3Fmodule%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=searchresult&modeName=&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=20035&exceptionLogID=&generalCAPSearch=&gisPortletName=&value(source)=&value(initMap)=&objectName=parcels&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID="
		"20035&sessionIdFromWindow=OI%2Bx0hdJ0Pv1Z%2BKh5Fl1bVvX&listID=&printType=&checkBoxValue=&isDynaPaging=true&page-navigator-input-id=1&uid=null&uid=null&uid=null&pageSizeR=5&", 
		"LAST");

	web_submit_data("empty.jsp_4", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t416.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_url("jquery-1.11.0.min.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t417.inf", 
		"LAST");

	web_url("hashMap.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t418.inf", 
		"LAST");

	web_url("ac360ui.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t419.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t420.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_14", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t421.inf", 
		"LAST");

	web_url("session.do_21", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14042", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t422.inf", 
		"LAST");

	lr_think_time(9);

	web_url("session.do_22", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14042", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t423.inf", 
		"LAST");

	lr_end_transaction("TC3_10_Search_Parcel",2);

	lr_think_time(5);

	lr_start_transaction("TC3_14_Click_Owner");

	web_url("session.do_23", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14042", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t424.inf", 
		"LAST");

	web_url("session.do_24", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t425.inf", 
		"LAST");

	web_url("recentlyViewed.do_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/recentlyViewed.do?mode=getRecentlyViewedItems", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t426.inf", 
		"LAST");

	web_url("session.do_25", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14042", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t427.inf", 
		"LAST");

	lr_think_time(4);

	web_url("session.do_26", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t428.inf", 
		"LAST");

	web_url("session.do_27", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14043", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t429.inf", 
		"LAST");

	web_url("menu_people_icon.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/space-icons/menu_people_icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t430.inf", 
		"LAST");

	web_url("refOwner.jsp", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/owner/refOwner.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t431.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("blank.jsp_13", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/owner/refOwner.jsp", 
		"Snapshot=t432.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("ac360base.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t433.inf", 
		"LAST");

	web_url("jquery-1.11.0.min.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t434.inf", 
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=TRANSACTION_TOKEN_KEY_FOR_REFOWNERLIST",
		"RegExp=name=\"TRANSACTION_TOKEN_KEY_FOR_REFOWNERLIST\"\\ value=\"(.*?)\">\\\r\\\n\\\t\\\t<input\\ type",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

	web_url("refOwnerList.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/owner/refOwner.jsp", 
		"Snapshot=t435.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("hashMap.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t436.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_15", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t437.inf", 
		"LAST");

	web_url("masked.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/masked.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t438.inf", 
		"LAST");

	web_url("memoryLeakPatch.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/memoryLeakPatch.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t439.inf", 
		"LAST");

	web_url("popup.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/popup/popup.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t440.inf", 
		"LAST");

	web_url("jquery-1.11.0.min.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t441.inf", 
		"LAST");

	web_url("ac360.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t442.inf", 
		"LAST");

	web_url("widget.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/widget/widget.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t443.inf", 
		"LAST");

	web_url("menubar.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/menubar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t444.inf", 
		"LAST");

	web_url("watermark.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/watermark.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t445.inf", 
		"LAST");

	web_url("opos.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/opos.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t446.inf", 
		"LAST");

	web_url("ac360base.js_13", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t447.inf", 
		"LAST");

	web_url("ajaxAnyWhere.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ajaxAnyWhere.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t448.inf", 
		"LAST");

	web_url("ac360InputBoxHotKey.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360InputBoxHotKey.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t449.inf", 
		"LAST");

	web_url("layoutPublic.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/layoutPublic.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t450.inf", 
		"LAST");

	web_url("AAHELP.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/docs/AAHELP.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t451.inf", 
		"LAST");

	web_url("hashMap.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t452.inf", 
		"LAST");

	web_url("genericMask.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/taglib/genericMask/javascript/genericMask.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t453.inf", 
		"LAST");

	web_url("myTask.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/myTask.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t454.inf", 
		"LAST");

	web_url("ac360ui.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t455.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t456.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_16", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t457.inf", 
		"LAST");

	web_url("I18N.js_22", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t458.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_22", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t459.inf", 
		"LAST");

	web_url("checkTextAreaLength.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/checkTextAreaLength.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t460.inf", 
		"LAST");

	web_url("I18N.js_23", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t461.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_23", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t462.inf", 
		"LAST");

	web_url("I18N.js_24", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t463.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_24", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t464.inf", 
		"LAST");

	web_url("I18N.js_25", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t465.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_25", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t466.inf", 
		"LAST");

	web_url("blank.jsp_14", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t467.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("I18N.js_26", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t468.inf", 
		"LAST");

	web_url("ac360base.js_14", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t469.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_26", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t470.inf", 
		"LAST");

	web_url("jquery-1.11.0.min.js_13", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t471.inf", 
		"LAST");

	web_url("I18N.js_27", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t472.inf", 
		"LAST");

	web_url("hashMap.js_13", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t473.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_27", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t474.inf", 
		"LAST");

	web_url("ac360ui.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t475.inf", 
		"LAST");

	web_url("hashMap.js_14", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t476.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t477.inf", 
		"LAST");

	web_url("Map.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Map.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t478.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_17", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t479.inf", 
		"LAST");

	web_submit_data("empty.jsp_5", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t480.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_5", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t481.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_6", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t482.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_7", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&getMsg=Y", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t483.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_28", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14043", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t484.inf", 
		"LAST");

	lr_end_transaction("TC3_14_Click_Owner",2);

	lr_think_time(6);

	lr_start_transaction("TC3_15_Search_Owner");

	web_url("session.do_29", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14043", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t485.inf", 
		"LAST");

	web_submit_data("refOwnerList.do_2",
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?mode=search",
		"Snapshot=t486.inf",
		"Mode=HTTP",
		"ITEMDATA",
		"Name=TRANSACTION_TOKEN_KEY_FOR_REFOWNERLIST", "Value={TRANSACTION_TOKEN_KEY_FOR_REFOWNERLIST}", "ENDITEM",
		"Name=value(FirstEntryURL)", "Value=/portlets/owner/refOwnerList.do?mode=search", "ENDITEM",
		"Name=value(CurrentEntryURL)", "Value=/portlets/owner/refOwnerList.do?mode=search", "ENDITEM",
		"Name=portlet_language", "Value=en_US", "ENDITEM",
		"Name=refresh_target", "Value=", "ENDITEM",
		"Name=refresh_url", "Value=", "ENDITEM",
		"Name=buttonName", "Value=", "ENDITEM",
		"Name=modeName", "Value=search", "ENDITEM",
		"Name=module", "Value=Building", "ENDITEM",
		"Name=accelasubmitbuttonname", "Value=submit", "ENDITEM",
		"Name=itemName", "Value=", "ENDITEM",
		"Name=CurrentViewID", "Value=20028", "ENDITEM",
		"Name=exceptionLogID", "Value=", "ENDITEM",
		"Name=generalCAPSearch", "Value=", "ENDITEM",
		"Name=objectName", "Value=", "ENDITEM",
		"Name=CheckBoxName", "Value=", "ENDITEM",
		"Name=MaxNumber", "Value=", "ENDITEM",
		"Name=ExportFileType", "Value=print", "ENDITEM",
		"Name=CurrentViewID", "Value=20028", "ENDITEM",
		"Name=sessionIdFromWindow", "Value=OI+x0hdJ0Pv1Z+Kh5Fl1bVvX", "ENDITEM",
		"Name=listID", "Value=", "ENDITEM",
		"Name=printType", "Value=", "ENDITEM",
		"Name=checkBoxValue", "Value=", "ENDITEM",
		"Name=value(refOwner*ownerFullName)", "Value=a", "ENDITEM",
		"Name=isNewSearch", "Value=true", "ENDITEM",
		"Name=value(refOwner*address1)", "Value=", "ENDITEM",
		"Name=value(refOwner*country)", "Value=", "ENDITEM",
		"Name=value(refOwner*city)", "Value=", "ENDITEM",
		"Name=value(refOwner*state)", "Value=", "ENDITEM",
		"Name=value(refOwner*zip_disp)", "Value=", "ENDITEM",
		"Name=value(refOwner*zip)", "Value=", "ENDITEM",
		"Name=value(refOwner*mailAddress1)", "Value=", "ENDITEM",
		"Name=value(refOwner*mailCity)", "Value=", "ENDITEM",
		"Name=value(refOwner*mailState)", "Value=", "ENDITEM",
		"Name=value(refOwner*mailZip)", "Value=", "ENDITEM",
		"Name=value(refOwner*parcelNbr)", "Value=", "ENDITEM",
		"Name=value(refOwner*structureType)", "Value=", "ENDITEM",
		"Name=value(refOwner*structureName)", "Value=", "ENDITEM",
		"Name=value(refOwner*ownerStatus)", "Value=", "ENDITEM",
		"Name=value(refOwner*ownerFirstName)", "Value=", "ENDITEM",
		"Name=value(refOwner*ownerLastName)", "Value=", "ENDITEM",
		"Name=value(refOwner*email)", "Value=", "ENDITEM",
		"Name=value(mode)", "Value=list", "ENDITEM",
		"LAST");

	web_url("jquery-1.11.0.min.js_14", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t487.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_18", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t488.inf", 
		"LAST");

	web_url("menubar.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/menubar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t489.inf", 
		"LAST");

	web_url("widget.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/widget/widget.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t490.inf", 
		"LAST");

	web_url("ac360base.js_15", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t491.inf", 
		"LAST");

	web_url("memoryLeakPatch.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/memoryLeakPatch.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t492.inf", 
		"LAST");

	web_url("ac360InputBoxHotKey.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360InputBoxHotKey.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t493.inf", 
		"LAST");

	web_url("popup.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/popup/popup.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t494.inf", 
		"LAST");

	web_url("ac360.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t495.inf", 
		"LAST");

	web_url("myTask.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/myTask.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t496.inf", 
		"LAST");

	web_url("opos.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/opos.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t497.inf", 
		"LAST");

	web_url("masked.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/masked.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t498.inf", 
		"LAST");

	web_url("commonConditionUtil.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/condition/commonConditionUtil.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t499.inf", 
		"LAST");

	web_url("layoutPublic.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/layoutPublic.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t500.inf", 
		"LAST");

	web_url("watermark.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/watermark.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t501.inf", 
		"LAST");

	web_url("dojo.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/dojo.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t502.inf", 
		"LAST");

	web_url("hashMap.js_15", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t503.inf", 
		"LAST");

	web_url("AAHELP.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/docs/AAHELP.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t504.inf", 
		"LAST");

	web_url("ac360ui.js_13", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t505.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_13", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t506.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_19", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t507.inf", 
		"LAST");

	web_url("I18N.js_28", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t508.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_28", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t509.inf", 
		"LAST");

	web_url("checkTextAreaLength.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/checkTextAreaLength.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t510.inf", 
		"LAST");

	web_url("I18N.js_29", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t511.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_29", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t512.inf", 
		"LAST");

	web_url("I18N.js_30", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t513.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_30", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t514.inf", 
		"LAST");

	lr_think_time(4);

	web_url("I18N.js_31", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t515.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_31", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t516.inf", 
		"LAST");

	web_url("blank.jsp_15", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t517.inf", 
		"Mode=HTTP", 
		"LAST");

	web_custom_request("refOwnerForm.do",
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerForm.do?mode=viewCondition&module=Building&refOwnerNumber=927284289",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building",
		"Snapshot=t518.inf",
		"Mode=HTTP",
		"Body=TRANSACTION_TOKEN_KEY_FOR_REFOWNERLIST={TRANSACTION_TOKEN_KEY_FOR_REFOWNERLIST}&value(FirstEntryURL)=%2Fportlets%2Fowner%2FrefOwnerList.do%3Fmode%3Dsearch&value(CurrentEntryURL)=%2Fportlets%2Fowner%2FrefOwnerList.do%3Fmodule%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=submit&modeName=searchresult&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=20027&exceptionLogID=&generalCAPSearch=&objectName=owners&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20027&sessionIdFromWindow=OI%2Bx0hdJ0Pv1Z%2BKh5Fl1bVvX&listID=&printType=&checkBoxValue=&isDynaPaging=true&page-navigator-input-id=1&927284288=DAVID%20FROST&927284288=DAVID%20FROST&927284289=FIONA&927284287=JANE%20AUSTEN&927284286=MICHAEL%20LEE&pageSizeR=5&",
		"LAST");

	web_custom_request("refOwnerForm.do_2",
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerForm.do?mode=viewCondition&module=Building&refOwnerNumber=927284288",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building",
		"Snapshot=t519.inf",
		"Mode=HTTP",
		"Body=TRANSACTION_TOKEN_KEY_FOR_REFOWNERLIST={TRANSACTION_TOKEN_KEY_FOR_REFOWNERLIST}&value(FirstEntryURL)=%2Fportlets%2Fowner%2FrefOwnerList.do%3Fmode%3Dsearch&value(CurrentEntryURL)=%2Fportlets%2Fowner%2FrefOwnerList.do%3Fmodule%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=submit&modeName=searchresult&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=20027&exceptionLogID=&generalCAPSearch=&objectName=owners&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20027&sessionIdFromWindow=OI%2Bx0hdJ0Pv1Z%2BKh5Fl1bVvX&listID=&printType=&checkBoxValue=&isDynaPaging=true&page-navigator-input-id=1&927284288=DAVID%20FROST&927284288=DAVID%20FROST&927284289=FIONA&927284287=JANE%20AUSTEN&927284286=MICHAEL%20LEE&pageSizeR=5&",
		"LAST");

	web_custom_request("refOwnerForm.do_3",
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerForm.do?mode=viewCondition&module=Building&refOwnerNumber=927284286",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building",
		"Snapshot=t520.inf",
		"Mode=HTTP",
		"Body=TRANSACTION_TOKEN_KEY_FOR_REFOWNERLIST={TRANSACTION_TOKEN_KEY_FOR_REFOWNERLIST}&value(FirstEntryURL)=%2Fportlets%2Fowner%2FrefOwnerList.do%3Fmode%3Dsearch&value(CurrentEntryURL)=%2Fportlets%2Fowner%2FrefOwnerList.do%3Fmodule%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=submit&modeName=searchresult&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=20027&exceptionLogID=&generalCAPSearch=&objectName=owners&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20027&sessionIdFromWindow=OI%2Bx0hdJ0Pv1Z%2BKh5Fl1bVvX&listID=&printType=&checkBoxValue=&isDynaPaging=true&page-navigator-input-id=1&927284288=DAVID%20FROST&927284288=DAVID%20FROST&927284289=FIONA&927284287=JANE%20AUSTEN&927284286=MICHAEL%20LEE&pageSizeR=5&",
		"LAST");

	web_url("Map.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Map.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t521.inf", 
		"LAST");

	web_custom_request("refOwnerForm.do_4",
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerForm.do?mode=viewCondition&module=Building&refOwnerNumber=927284288",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building",
		"Snapshot=t522.inf",
		"Mode=HTTP",
		"Body=TRANSACTION_TOKEN_KEY_FOR_REFOWNERLIST={TRANSACTION_TOKEN_KEY_FOR_REFOWNERLIST}&value(FirstEntryURL)=%2Fportlets%2Fowner%2FrefOwnerList.do%3Fmode%3Dsearch&value(CurrentEntryURL)=%2Fportlets%2Fowner%2FrefOwnerList.do%3Fmodule%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=submit&modeName=searchresult&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=20027&exceptionLogID=&generalCAPSearch=&objectName=owners&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20027&sessionIdFromWindow=OI%2Bx0hdJ0Pv1Z%2BKh5Fl1bVvX&listID=&printType=&checkBoxValue=&isDynaPaging=true&page-navigator-input-id=1&927284288=DAVID%20FROST&927284288=DAVID%20FROST&927284289=FIONA&927284287=JANE%20AUSTEN&927284286=MICHAEL%20LEE&pageSizeR=5&",
		"LAST");

	web_url("ac360base.js_16", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t523.inf", 
		"LAST");

	web_custom_request("refOwnerForm.do_5",
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerForm.do?mode=viewCondition&module=Building&refOwnerNumber=927284287",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building",
		"Snapshot=t524.inf",
		"Mode=HTTP",
		"Body=TRANSACTION_TOKEN_KEY_FOR_REFOWNERLIST={TRANSACTION_TOKEN_KEY_FOR_REFOWNERLIST}&value(FirstEntryURL)=%2Fportlets%2Fowner%2FrefOwnerList.do%3Fmode%3Dsearch&value(CurrentEntryURL)=%2Fportlets%2Fowner%2FrefOwnerList.do%3Fmodule%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=submit&modeName=searchresult&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=20027&exceptionLogID=&generalCAPSearch=&objectName=owners&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20027&sessionIdFromWindow=OI%2Bx0hdJ0Pv1Z%2BKh5Fl1bVvX&listID=&printType=&checkBoxValue=&isDynaPaging=true&page-navigator-input-id=1&927284288=DAVID%20FROST&927284288=DAVID%20FROST&927284289=FIONA&927284287=JANE%20AUSTEN&927284286=MICHAEL%20LEE&pageSizeR=5&",
		"LAST");

	web_submit_data("empty.jsp_6", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t525.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_url("jquery-1.11.0.min.js_15", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t526.inf", 
		"LAST");

	web_url("hashMap.js_16", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t527.inf", 
		"LAST");

	web_url("ac360ui.js_14", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t528.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_14", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t529.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_20", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t530.inf", 
		"LAST");

	web_url("session.do_30", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14043", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t531.inf", 
		"LAST");

	lr_end_transaction("TC3_15_Search_Owner",2);

	lr_think_time(22);

	web_url("session.do_31", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14043", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t532.inf", 
		"LAST");

	lr_think_time(15);

	lr_start_transaction("TC3_19_Click_LicenseProfessionals");

	web_url("session.do_32", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14043", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t533.inf", 
		"LAST");

	web_url("session.do_33", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t534.inf", 
		"LAST");

	web_url("recentlyViewed.do_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/recentlyViewed.do?mode=getRecentlyViewedItems", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t535.inf", 
		"LAST");

	web_url("session.do_34", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14043", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t536.inf", 
		"LAST");

	lr_think_time(6);

	web_url("session.do_35", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t537.inf", 
		"LAST");

	web_url("session.do_36", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14044", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t538.inf", 
		"LAST");

	web_url("refProfessional.jsp", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/professional/refProfessional.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t539.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("blank.jsp_16", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/professional/refProfessional.jsp", 
		"Snapshot=t540.inf", 
		"Mode=HTTP", 
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=CTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM",
		"RegExp=name=\"TRANSACTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM\"\\ value=\"(.*?)\">\\\r\\\n\\\t\\\t<input\\ type",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

	web_url("refProfessionalList.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/professional/refProfessional.jsp", 
		"Snapshot=t541.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("ac360base.js_17", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t542.inf", 
		"LAST");

	web_url("jquery-1.11.0.min.js_16", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t543.inf", 
		"LAST");

	web_url("ac360base.js_18", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t544.inf", 
		"LAST");

	web_url("widget.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/widget/widget.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t545.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_21", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t546.inf", 
		"LAST");

	web_url("memoryLeakPatch.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/memoryLeakPatch.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t547.inf", 
		"LAST");

	web_url("ac360.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t548.inf", 
		"LAST");

	web_url("ac360InputBoxHotKey.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360InputBoxHotKey.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t549.inf", 
		"LAST");

	web_url("opos.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/opos.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t550.inf", 
		"LAST");

	web_url("popup.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/popup/popup.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t551.inf", 
		"LAST");

	web_url("menubar.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/menubar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t552.inf", 
		"LAST");

	web_url("masked.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/masked.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t553.inf", 
		"LAST");

	web_url("myTask.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/myTask.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t554.inf", 
		"LAST");

	web_url("ext-all.css", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ext-2.0.2/resources/css/ext-all.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t555.inf", 
		"LAST");

	web_url("dojo.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/dojo.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t556.inf", 
		"LAST");

	web_url("watermark.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/watermark.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t557.inf", 
		"LAST");

	web_url("ext-base.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ext-2.0.2/adapter/ext/ext-base.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t558.inf", 
		"LAST");

	web_url("ext-core.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ext-2.0.2/ext-core.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t559.inf", 
		"LAST");

	web_url("AAHELP.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/docs/AAHELP.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t560.inf", 
		"LAST");

	web_url("ext-all.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ext-2.0.2/ext-all.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t561.inf", 
		"LAST");

	web_url("education.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/education/education.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t562.inf", 
		"LAST");

	web_url("commonConditionUtil.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/condition/commonConditionUtil.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t563.inf", 
		"LAST");

	web_url("layoutPublic.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/layoutPublic.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t564.inf", 
		"LAST");

	web_url("hashMap.js_17", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t565.inf", 
		"LAST");

	web_url("ac360ui.js_15", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t566.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_15", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t567.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_22", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t568.inf", 
		"LAST");

	web_url("I18N.js_32", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t569.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_32", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t570.inf", 
		"LAST");

	web_url("checkTextAreaLength.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/checkTextAreaLength.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t571.inf", 
		"LAST");

	web_url("I18N.js_33", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t572.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_33", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t573.inf", 
		"LAST");

	web_url("I18N.js_34", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t574.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_34", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t575.inf", 
		"LAST");

	web_url("I18N.js_35", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t576.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_35", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t577.inf", 
		"LAST");

	web_url("blank.jsp_17", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t578.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("__package__.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/widget/__package__.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t579.inf", 
		"LAST");

	web_url("ac360base.js_19", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t580.inf", 
		"LAST");

	web_url("Parse.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/xml/Parse.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t581.inf", 
		"LAST");

	web_url("Widget.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/widget/Widget.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t582.inf", 
		"LAST");

	web_url("declare.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/lang/declare.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t583.inf", 
		"LAST");

	web_url("ns.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/ns.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t584.inf", 
		"LAST");

	web_url("Manager.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/widget/Manager.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t585.inf", 
		"LAST");

	web_url("a11y.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/a11y.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t586.inf", 
		"LAST");

	web_url("__package__.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/uri/__package__.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t587.inf", 
		"LAST");

	web_url("Parse.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/widget/Parse.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t588.inf", 
		"LAST");

	web_url("DomWidget.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/widget/DomWidget.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t589.inf", 
		"LAST");

	web_url("HtmlWidget.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/widget/HtmlWidget.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t590.inf", 
		"LAST");

	web_url("util.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/html/util.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t591.inf", 
		"LAST");

	web_url("toggle.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/lfx/toggle.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t592.inf", 
		"LAST");

	web_url("jquery-1.11.0.min.js_17", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t593.inf", 
		"LAST");

	web_custom_request("refProfessionalDetail.do",
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalDetail.do?mode=viewCondition&module=Building&licSeqNbr=859648",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false",
		"Snapshot=t594.inf",
		"Mode=HTTP",
		"Body=TRANSACTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM={CTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM}&value(FirstEntryURL)=%2Fportlets%2Fprofessional%2Fref%2FrefProfessionalList.do%3Fmode%3DquickQuery%26lookup%3Dfalse&value(CurrentEntryURL)=%2Fportlets%2Fprofessional%2Fref%2FrefProfessionalList.do%3Fmode%3DquickQuery%26lookup%3Dfalse&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=quickQuery&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=20041&exceptionLogID=&generalCAPSearch=&value(selectedQuickQuery)=&objectName=licenseList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20041&sessionIdFromWindow=OI%2Bx0hdJ0Pv1Z%2BKh5Fl1bVvX&listID=&printType=&checkBoxValue=&disableEduSectionFlag=&isContactValidateBtnFlag=&value(mode)=searchresult&isDynaPaging=true&page-navigator-input-id=1&stateLicense_859648=0312&stateLicense_200859976=060606&stateLicense_2200860521=09-ARCH-00003&stateLicense_2200860532=09-ARCH-00005&stateLicense_2200860535=09-ARCH-00007&st"
		"ateLicense_2200860536=09-ARCH-00008&stateLicense_2200860570=09-ARCH-00010&stateLicense_2200860519=09-PEOP-00001&stateLicense_2200860520=09-PEOP-00002&stateLicense_20001437756=101001010100&pageSizeR=10&",
		"LAST");

	web_custom_request("refProfessionalDetail.do_2",
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalDetail.do?mode=viewCondition&module=Building&licSeqNbr=2200860532",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false",
		"Snapshot=t595.inf",
		"Mode=HTTP",
		"Body=TRANSACTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM={CTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM}&value(FirstEntryURL)=%2Fportlets%2Fprofessional%2Fref%2FrefProfessionalList.do%3Fmode%3DquickQuery%26lookup%3Dfalse&value(CurrentEntryURL)=%2Fportlets%2Fprofessional%2Fref%2FrefProfessionalList.do%3Fmode%3DquickQuery%26lookup%3Dfalse&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=quickQuery&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=20041&exceptionLogID=&generalCAPSearch=&value(selectedQuickQuery)=&objectName=licenseList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20041&sessionIdFromWindow=OI%2Bx0hdJ0Pv1Z%2BKh5Fl1bVvX&listID=&printType=&checkBoxValue=&disableEduSectionFlag=&isContactValidateBtnFlag=&value(mode)=searchresult&isDynaPaging=true&page-navigator-input-id=1&stateLicense_859648=0312&stateLicense_200859976=060606&stateLicense_2200860521=09-ARCH-00003&stateLicense_2200860532=09-ARCH-00005&stateLicense_2200860535=09-ARCH-00007&st"
		"ateLicense_2200860536=09-ARCH-00008&stateLicense_2200860570=09-ARCH-00010&stateLicense_2200860519=09-PEOP-00001&stateLicense_2200860520=09-PEOP-00002&stateLicense_20001437756=101001010100&pageSizeR=10&",
		"LAST");

	web_custom_request("refProfessionalDetail.do_3",
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalDetail.do?mode=viewCondition&module=Building&licSeqNbr=2200860536",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false",
		"Snapshot=t596.inf",
		"Mode=HTTP",
		"Body=TRANSACTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM={CTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM}&value(FirstEntryURL)=%2Fportlets%2Fprofessional%2Fref%2FrefProfessionalList.do%3Fmode%3DquickQuery%26lookup%3Dfalse&value(CurrentEntryURL)=%2Fportlets%2Fprofessional%2Fref%2FrefProfessionalList.do%3Fmode%3DquickQuery%26lookup%3Dfalse&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=quickQuery&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=20041&exceptionLogID=&generalCAPSearch=&value(selectedQuickQuery)=&objectName=licenseList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20041&sessionIdFromWindow=OI%2Bx0hdJ0Pv1Z%2BKh5Fl1bVvX&listID=&printType=&checkBoxValue=&disableEduSectionFlag=&isContactValidateBtnFlag=&value(mode)=searchresult&isDynaPaging=true&page-navigator-input-id=1&stateLicense_859648=0312&stateLicense_200859976=060606&stateLicense_2200860521=09-ARCH-00003&stateLicense_2200860532=09-ARCH-00005&stateLicense_2200860535=09-ARCH-00007&st"
		"ateLicense_2200860536=09-ARCH-00008&stateLicense_2200860570=09-ARCH-00010&stateLicense_2200860519=09-PEOP-00001&stateLicense_2200860520=09-PEOP-00002&stateLicense_20001437756=101001010100&pageSizeR=10&",
		"LAST");

	web_custom_request("refProfessionalDetail.do_4",
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalDetail.do?mode=viewCondition&module=Building&licSeqNbr=2200860519",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false",
		"Snapshot=t597.inf",
		"Mode=HTTP",
		"Body=TRANSACTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM={CTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM}&value(FirstEntryURL)=%2Fportlets%2Fprofessional%2Fref%2FrefProfessionalList.do%3Fmode%3DquickQuery%26lookup%3Dfalse&value(CurrentEntryURL)=%2Fportlets%2Fprofessional%2Fref%2FrefProfessionalList.do%3Fmode%3DquickQuery%26lookup%3Dfalse&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=quickQuery&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=20041&exceptionLogID=&generalCAPSearch=&value(selectedQuickQuery)=&objectName=licenseList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20041&sessionIdFromWindow=OI%2Bx0hdJ0Pv1Z%2BKh5Fl1bVvX&listID=&printType=&checkBoxValue=&disableEduSectionFlag=&isContactValidateBtnFlag=&value(mode)=searchresult&isDynaPaging=true&page-navigator-input-id=1&stateLicense_859648=0312&stateLicense_200859976=060606&stateLicense_2200860521=09-ARCH-00003&stateLicense_2200860532=09-ARCH-00005&stateLicense_2200860535=09-ARCH-00007&st"
		"ateLicense_2200860536=09-ARCH-00008&stateLicense_2200860570=09-ARCH-00010&stateLicense_2200860519=09-PEOP-00001&stateLicense_2200860520=09-PEOP-00002&stateLicense_20001437756=101001010100&pageSizeR=10&",
		"LAST");

	web_custom_request("refProfessionalDetail.do_5",
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalDetail.do?mode=viewCondition&module=Building&licSeqNbr=2200860521",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false",
		"Snapshot=t598.inf",
		"Mode=HTTP",
		"Body=TRANSACTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM={CTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM}&value(FirstEntryURL)=%2Fportlets%2Fprofessional%2Fref%2FrefProfessionalList.do%3Fmode%3DquickQuery%26lookup%3Dfalse&value(CurrentEntryURL)=%2Fportlets%2Fprofessional%2Fref%2FrefProfessionalList.do%3Fmode%3DquickQuery%26lookup%3Dfalse&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=quickQuery&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=20041&exceptionLogID=&generalCAPSearch=&value(selectedQuickQuery)=&objectName=licenseList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20041&sessionIdFromWindow=OI%2Bx0hdJ0Pv1Z%2BKh5Fl1bVvX&listID=&printType=&checkBoxValue=&disableEduSectionFlag=&isContactValidateBtnFlag=&value(mode)=searchresult&isDynaPaging=true&page-navigator-input-id=1&stateLicense_859648=0312&stateLicense_200859976=060606&stateLicense_2200860521=09-ARCH-00003&stateLicense_2200860532=09-ARCH-00005&stateLicense_2200860535=09-ARCH-00007&st"
		"ateLicense_2200860536=09-ARCH-00008&stateLicense_2200860570=09-ARCH-00010&stateLicense_2200860519=09-PEOP-00001&stateLicense_2200860520=09-PEOP-00002&stateLicense_20001437756=101001010100&pageSizeR=10&",
		"LAST");

	web_custom_request("refProfessionalDetail.do_6",
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalDetail.do?mode=viewCondition&module=Building&licSeqNbr=200859976",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false",
		"Snapshot=t599.inf",
		"Mode=HTTP",
		"Body=TRANSACTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM={CTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM}&value(FirstEntryURL)=%2Fportlets%2Fprofessional%2Fref%2FrefProfessionalList.do%3Fmode%3DquickQuery%26lookup%3Dfalse&value(CurrentEntryURL)=%2Fportlets%2Fprofessional%2Fref%2FrefProfessionalList.do%3Fmode%3DquickQuery%26lookup%3Dfalse&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=quickQuery&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=20041&exceptionLogID=&generalCAPSearch=&value(selectedQuickQuery)=&objectName=licenseList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20041&sessionIdFromWindow=OI%2Bx0hdJ0Pv1Z%2BKh5Fl1bVvX&listID=&printType=&checkBoxValue=&disableEduSectionFlag=&isContactValidateBtnFlag=&value(mode)=searchresult&isDynaPaging=true&page-navigator-input-id=1&stateLicense_859648=0312&stateLicense_200859976=060606&stateLicense_2200860521=09-ARCH-00003&stateLicense_2200860532=09-ARCH-00005&stateLicense_2200860535=09-ARCH-00007&st"
		"ateLicense_2200860536=09-ARCH-00008&stateLicense_2200860570=09-ARCH-00010&stateLicense_2200860519=09-PEOP-00001&stateLicense_2200860520=09-PEOP-00002&stateLicense_20001437756=101001010100&pageSizeR=10&",
		"LAST");

	web_url("Map.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Map.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t600.inf", 
		"LAST");

	web_custom_request("refProfessionalDetail.do_7",
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalDetail.do?mode=viewCondition&module=Building&licSeqNbr=2200860570",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false",
		"Snapshot=t601.inf",
		"Mode=HTTP",
		"Body=TRANSACTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM={CTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM}&value(FirstEntryURL)=%2Fportlets%2Fprofessional%2Fref%2FrefProfessionalList.do%3Fmode%3DquickQuery%26lookup%3Dfalse&value(CurrentEntryURL)=%2Fportlets%2Fprofessional%2Fref%2FrefProfessionalList.do%3Fmode%3DquickQuery%26lookup%3Dfalse&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=quickQuery&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=20041&exceptionLogID=&generalCAPSearch=&value(selectedQuickQuery)=&objectName=licenseList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20041&sessionIdFromWindow=OI%2Bx0hdJ0Pv1Z%2BKh5Fl1bVvX&listID=&printType=&checkBoxValue=&disableEduSectionFlag=&isContactValidateBtnFlag=&value(mode)=searchresult&isDynaPaging=true&page-navigator-input-id=1&stateLicense_859648=0312&stateLicense_200859976=060606&stateLicense_2200860521=09-ARCH-00003&stateLicense_2200860532=09-ARCH-00005&stateLicense_2200860535=09-ARCH-00007&st"
		"ateLicense_2200860536=09-ARCH-00008&stateLicense_2200860570=09-ARCH-00010&stateLicense_2200860519=09-PEOP-00001&stateLicense_2200860520=09-PEOP-00002&stateLicense_20001437756=101001010100&pageSizeR=10&",
		"LAST");

	web_custom_request("refProfessionalDetail.do_8",
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalDetail.do?mode=viewCondition&module=Building&licSeqNbr=2200860520",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false",
		"Snapshot=t602.inf",
		"Mode=HTTP",
		"Body=TRANSACTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM={CTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM}&value(FirstEntryURL)=%2Fportlets%2Fprofessional%2Fref%2FrefProfessionalList.do%3Fmode%3DquickQuery%26lookup%3Dfalse&value(CurrentEntryURL)=%2Fportlets%2Fprofessional%2Fref%2FrefProfessionalList.do%3Fmode%3DquickQuery%26lookup%3Dfalse&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=quickQuery&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=20041&exceptionLogID=&generalCAPSearch=&value(selectedQuickQuery)=&objectName=licenseList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20041&sessionIdFromWindow=OI%2Bx0hdJ0Pv1Z%2BKh5Fl1bVvX&listID=&printType=&checkBoxValue=&disableEduSectionFlag=&isContactValidateBtnFlag=&value(mode)=searchresult&isDynaPaging=true&page-navigator-input-id=1&stateLicense_859648=0312&stateLicense_200859976=060606&stateLicense_2200860521=09-ARCH-00003&stateLicense_2200860532=09-ARCH-00005&stateLicense_2200860535=09-ARCH-00007&st"
		"ateLicense_2200860536=09-ARCH-00008&stateLicense_2200860570=09-ARCH-00010&stateLicense_2200860519=09-PEOP-00001&stateLicense_2200860520=09-PEOP-00002&stateLicense_20001437756=101001010100&pageSizeR=10&",
		"LAST");

	web_custom_request("refProfessionalDetail.do_9",
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalDetail.do?mode=viewCondition&module=Building&licSeqNbr=20001437756",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false",
		"Snapshot=t603.inf",
		"Mode=HTTP",
		"Body=TRANSACTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM={CTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM}&value(FirstEntryURL)=%2Fportlets%2Fprofessional%2Fref%2FrefProfessionalList.do%3Fmode%3DquickQuery%26lookup%3Dfalse&value(CurrentEntryURL)=%2Fportlets%2Fprofessional%2Fref%2FrefProfessionalList.do%3Fmode%3DquickQuery%26lookup%3Dfalse&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=quickQuery&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=20041&exceptionLogID=&generalCAPSearch=&value(selectedQuickQuery)=&objectName=licenseList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20041&sessionIdFromWindow=OI%2Bx0hdJ0Pv1Z%2BKh5Fl1bVvX&listID=&printType=&checkBoxValue=&disableEduSectionFlag=&isContactValidateBtnFlag=&value(mode)=searchresult&isDynaPaging=true&page-navigator-input-id=1&stateLicense_859648=0312&stateLicense_200859976=060606&stateLicense_2200860521=09-ARCH-00003&stateLicense_2200860532=09-ARCH-00005&stateLicense_2200860535=09-ARCH-00007&st"
		"ateLicense_2200860536=09-ARCH-00008&stateLicense_2200860570=09-ARCH-00010&stateLicense_2200860519=09-PEOP-00001&stateLicense_2200860520=09-PEOP-00002&stateLicense_20001437756=101001010100&pageSizeR=10&",
		"LAST");

	web_url("hashMap.js_18", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t604.inf", 
		"LAST");

	web_custom_request("refProfessionalDetail.do_10",
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalDetail.do?mode=viewCondition&module=Building&licSeqNbr=2200860535",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false",
		"Snapshot=t605.inf",
		"Mode=HTTP",
		"Body=TRANSACTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM={CTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM}&value(FirstEntryURL)=%2Fportlets%2Fprofessional%2Fref%2FrefProfessionalList.do%3Fmode%3DquickQuery%26lookup%3Dfalse&value(CurrentEntryURL)=%2Fportlets%2Fprofessional%2Fref%2FrefProfessionalList.do%3Fmode%3DquickQuery%26lookup%3Dfalse&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=quickQuery&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=20041&exceptionLogID=&generalCAPSearch=&value(selectedQuickQuery)=&objectName=licenseList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20041&sessionIdFromWindow=OI%2Bx0hdJ0Pv1Z%2BKh5Fl1bVvX&listID=&printType=&checkBoxValue=&disableEduSectionFlag=&isContactValidateBtnFlag=&value(mode)=searchresult&isDynaPaging=true&page-navigator-input-id=1&stateLicense_859648=0312&stateLicense_200859976=060606&stateLicense_2200860521=09-ARCH-00003&stateLicense_2200860532=09-ARCH-00005&stateLicense_2200860535=09-ARCH-00007&st"
		"ateLicense_2200860536=09-ARCH-00008&stateLicense_2200860570=09-ARCH-00010&stateLicense_2200860519=09-PEOP-00001&stateLicense_2200860520=09-PEOP-00002&stateLicense_20001437756=101001010100&pageSizeR=10&",
		"LAST");

	web_submit_data("empty.jsp_7", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t606.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_url("ac360ui.js_16", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t607.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_16", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t608.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_23", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t609.inf", 
		"LAST");

	lr_end_transaction("TC3_19_Click_LicenseProfessionals",2);

	lr_think_time(9);

	lr_start_transaction("TC3_19_Click_LicenseProfessionals_SearchTab");

	web_url("refProfessionalList.do_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t610.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("session.do_37", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14044", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t611.inf", 
		"LAST");

	web_url("jquery-1.11.0.min.js_18", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t612.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_24", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t613.inf", 
		"LAST");

	web_url("menubar.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/menubar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t614.inf", 
		"LAST");

	web_url("ac360base.js_20", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t615.inf", 
		"LAST");

	web_url("appSpecInfoTableFilter.css", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/appspecinfo/CSS/sky_blue/appSpecInfoTableFilter.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t616.inf", 
		"LAST");

	web_url("ac360.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t617.inf", 
		"LAST");

	web_url("widget.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/widget/widget.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t618.inf", 
		"LAST");

	web_url("masked.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/masked.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t619.inf", 
		"LAST");

	web_url("memoryLeakPatch.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/memoryLeakPatch.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t620.inf", 
		"LAST");

	web_url("opos.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/opos.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t621.inf", 
		"LAST");

	web_url("ac360InputBoxHotKey.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360InputBoxHotKey.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t622.inf", 
		"LAST");

	web_url("myTask.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/myTask.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t623.inf", 
		"LAST");

	web_url("popup.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/popup/popup.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t624.inf", 
		"LAST");

	web_url("form.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/genericTemplate/js/form.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t625.inf", 
		"LAST");

	web_url("template_express.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/genericTemplate/js/template_express.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t626.inf", 
		"LAST");

	web_url("template.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/genericTemplate/js/template.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t627.inf", 
		"LAST");

	web_url("templateHelper.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/genericTemplate/js/templateHelper.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t628.inf", 
		"LAST");

	web_url("ext-core.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ext-2.0.2/ext-core.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t629.inf", 
		"LAST");

	web_url("Date.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ext-2.0.2/source/util/Date.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t630.inf", 
		"LAST");

	web_url("jquery.watermark.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/genericTemplate/js/jquery.watermark.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t631.inf", 
		"LAST");

	web_url("ext-base.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ext-2.0.2/adapter/ext/ext-base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t632.inf", 
		"LAST");

	web_url("field.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/genericTemplate/js/field.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t633.inf", 
		"LAST");

	web_url("table.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/genericTemplate/js/table.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t634.inf", 
		"LAST");

	web_url("genericMask.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/taglib/genericMask/javascript/genericMask.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t635.inf", 
		"LAST");

	web_url("layoutPublic.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/layoutPublic.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t636.inf", 
		"LAST");

	web_url("spellchecker-caller.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/spellchecker/spellchecker-caller.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t637.inf", 
		"LAST");

	web_url("dojo.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/dojo.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t638.inf", 
		"LAST");

	web_url("hashMap.js_19", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t639.inf", 
		"LAST");

	web_url("validate.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/genericTemplate/js/validate.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t640.inf", 
		"LAST");

	web_url("watermark.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/watermark.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t641.inf", 
		"LAST");

	web_url("ajaxAnyWhere.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ajaxAnyWhere.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t642.inf", 
		"LAST");

	web_url("formlayout.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/genericTemplate/js/formlayout.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t643.inf", 
		"LAST");

	web_url("style.css", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/appspecinfo/CSS/sky_blue/style.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t644.inf", 
		"LAST");

	web_url("AAHELP.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/docs/AAHELP.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t645.inf", 
		"LAST");

	web_url("ac360ui.js_17", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t646.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_17", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t647.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_25", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t648.inf", 
		"LAST");

	web_url("I18N.js_36", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t649.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_36", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t650.inf", 
		"LAST");

	web_url("checkTextAreaLength.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/checkTextAreaLength.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t651.inf", 
		"LAST");

	web_url("I18N.js_37", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t652.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_37", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t653.inf", 
		"LAST");

	web_url("I18N.js_38", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t654.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_38", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t655.inf", 
		"LAST");

	web_url("I18N.js_39", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t656.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_39", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t657.inf", 
		"LAST");

	web_url("blank.jsp_18", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t658.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("I18N.js_40", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t659.inf", 
		"LAST");

	web_url("ac360base.js_21", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t660.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_40", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t661.inf", 
		"LAST");

	web_url("jquery-1.11.0.min.js_19", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t662.inf", 
		"LAST");

	web_url("I18N.js_41", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t663.inf", 
		"LAST");

	web_url("hashMap.js_20", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t664.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_41", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t665.inf", 
		"LAST");

	web_url("ac360ui.js_18", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t666.inf", 
		"LAST");

	web_url("hashMap.js_21", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t667.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_18", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t668.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_26", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t669.inf", 
		"LAST");

	web_submit_data("ajax.do", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t670.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_url("Map.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Map.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t671.inf", 
		"LAST");

	web_submit_data("empty.jsp_8", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t672.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_url("base64.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/base64.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t673.inf", 
		"LAST");

	web_submit_data("regionalSyncMask.do_8", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t674.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_9", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t675.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_10", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&getMsg=Y", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t676.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_11", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t677.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_12", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t678.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_13", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t679.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_14", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t680.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_15", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t681.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_16", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t682.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_17", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t683.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_18", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t684.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	lr_end_transaction("TC3_19_Click_LicenseProfessionals_SearchTab",2);

	lr_think_time(16);

	lr_start_transaction("TC3_20_Search_LicenseProfessionals_Submit");

	web_submit_data("refProfessionalList.do_3",
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building",
		"Snapshot=t685.inf",
		"Mode=HTTP",
		"ITEMDATA",
		"Name=TRANSACTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM", "Value={CTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM}", "ENDITEM",
		"Name=value(FirstEntryURL)", "Value=/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", "ENDITEM",
		"Name=value(CurrentEntryURL)", "Value=/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", "ENDITEM",
		"Name=portlet_language", "Value=en_US", "ENDITEM",
		"Name=refresh_target", "Value=", "ENDITEM",
		"Name=refresh_url", "Value=", "ENDITEM",
		"Name=buttonName", "Value=", "ENDITEM",
		"Name=modeName", "Value=search", "ENDITEM",
		"Name=module", "Value=Building", "ENDITEM",
		"Name=accelasubmitbuttonname", "Value=submit", "ENDITEM",
		"Name=itemName", "Value=", "ENDITEM",
		"Name=CurrentViewID", "Value=20042", "ENDITEM",
		"Name=exceptionLogID", "Value=", "ENDITEM",
		"Name=generalCAPSearch", "Value=", "ENDITEM",
		"Name=objectName", "Value=", "ENDITEM",
		"Name=CheckBoxName", "Value=", "ENDITEM",
		"Name=MaxNumber", "Value=", "ENDITEM",
		"Name=ExportFileType", "Value=print", "ENDITEM",
		"Name=CurrentViewID", "Value=20042", "ENDITEM",
		"Name=sessionIdFromWindow", "Value=OI+x0hdJ0Pv1Z+Kh5Fl1bVvX", "ENDITEM",
		"Name=listID", "Value=", "ENDITEM",
		"Name=printType", "Value=", "ENDITEM",
		"Name=checkBoxValue", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=none", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(typeFlag)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(licSeqNbr)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(businessName)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=date(licenseissuedate)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=date(licenselastrenewaldate)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=date(licenseexpirationdate)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(contactfirstname)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(contactmiddlename)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(contactlastname)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(address1)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(address2)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(city)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(state)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(zip_disp)", "Value=", "ENDITEM",
		"Name=value(zip)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(phone1CountryCode)", "Value=", "ENDITEM",
		"Name=value(phone1_disp)", "Value=", "ENDITEM",
		"Name=value(phone1)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(phone2CountryCode)", "Value=", "ENDITEM",
		"Name=value(phone2_disp)", "Value=", "ENDITEM",
		"Name=value(phone2)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(faxCountryCode)", "Value=", "ENDITEM",
		"Name=value(fax_disp)", "Value=", "ENDITEM",
		"Name=value(fax)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(EMailAddress)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(comment)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(insuranceco)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(insuranceamount)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(policy)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=date(insuranceexpdate)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(businesslicense)", "Value=783", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=date(businesslicexpdate)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(licState)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(licensetype)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(stateLicense)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(auditstatus)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(salutation)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(gender)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(postOfficeBox)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(busName2)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=date(birthDate)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(countryCode)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(contrLicNo)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(contLicBusName)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(address3)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(wcExempt)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(wcInsCoCode)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(wcPolicyNo)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=date(wcExpDate)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(providerName)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(providerNo)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(degree)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(discipline)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(licenseBoard)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(socialSecurityNumber)", "Value=", "ENDITEM",
		"Name=value(maskformat_socialSecurityNumber)", "Value=AAA-AA-AAAA", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(fein)", "Value=", "ENDITEM",
		"Name=value(maskformat_fein)", "Value=####-##-####", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(phone3CountryCode)", "Value=", "ENDITEM",
		"Name=value(phone3_disp)", "Value=", "ENDITEM",
		"Name=value(phone3)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(acaPermission)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(nigpType)", "Value=All Goods and Services", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(nigpKeyword)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(maximumContractAmountOperator)", "Value=", "ENDITEM",
		"Name=value(maximumContractAmount)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(title)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(genericTemplateAttribute*fieldName)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(genericTemplateAttribute*defaultValue)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(genericTemplateTableValue*fieldName)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(genericTemplateTableValue*defaultValue)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(suffixName)", "Value=", "ENDITEM",
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM",
		"Name=value(templateGroup)", "Value=G3PROFESSIONAL", "ENDITEM",
		"Name=value(mode)", "Value=list", "ENDITEM",
		"Name=valuetextarea285", "Value=", "ENDITEM",
		"Name=sourcetextarea285", "Value=", "ENDITEM",
		"Name=layouttextarea285", "Value=", "ENDITEM",
		"Name=uiuid", "Value=285", "ENDITEM",
		"Name=_viewstate_", "Value={\"empty\":false,\"fields\":{\"value(fein)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"FEIN\"},\"value(socialSecurityNumber)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"SSN\"}}}", "ENDITEM",
		"LAST");

	web_url("Ac360ToolManager.js_27", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t686.inf", 
		"LAST");

	web_url("jquery-1.11.0.min.js_20", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t687.inf", 
		"LAST");

	web_url("menubar.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/menubar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t688.inf", 
		"LAST");

	web_url("ac360base.js_22", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t689.inf", 
		"LAST");

	web_url("widget.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/widget/widget.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t690.inf", 
		"LAST");

	web_url("AAHELP.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/docs/AAHELP.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t691.inf", 
		"LAST");

	web_url("ac360.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t692.inf", 
		"LAST");

	web_url("ac360InputBoxHotKey.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360InputBoxHotKey.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t693.inf", 
		"LAST");

	web_url("opos.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/opos.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t694.inf", 
		"LAST");

	web_url("memoryLeakPatch.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/memoryLeakPatch.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t695.inf", 
		"LAST");

	web_url("masked.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/masked.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t696.inf", 
		"LAST");

	web_url("popup.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/popup/popup.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t697.inf", 
		"LAST");

	web_url("ext-all.css_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ext-2.0.2/resources/css/ext-all.css", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t698.inf", 
		"LAST");

	web_url("myTask.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/myTask.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t699.inf", 
		"LAST");

	web_url("watermark.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/watermark.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t700.inf", 
		"LAST");

	web_url("ext-base.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ext-2.0.2/adapter/ext/ext-base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t701.inf", 
		"LAST");

	web_url("dojo.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/dojo.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t702.inf", 
		"LAST");

	web_url("ext-core.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ext-2.0.2/ext-core.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t703.inf", 
		"LAST");

	web_url("commonConditionUtil.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/condition/commonConditionUtil.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t704.inf", 
		"LAST");

	web_url("hashMap.js_22", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t705.inf", 
		"LAST");

	web_url("education.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/education/education.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t706.inf", 
		"LAST");

	web_url("ext-all.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ext-2.0.2/ext-all.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t707.inf", 
		"LAST");

	web_url("layoutPublic.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/layoutPublic.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t708.inf", 
		"LAST");

	web_url("ac360ui.js_19", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t709.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_19", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t710.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_28", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t711.inf", 
		"LAST");

	web_url("I18N.js_42", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t712.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_42", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t713.inf", 
		"LAST");

	web_url("checkTextAreaLength.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/checkTextAreaLength.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t714.inf", 
		"LAST");

	web_url("I18N.js_43", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t715.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_43", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t716.inf", 
		"LAST");

	web_url("I18N.js_44", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t717.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_44", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t718.inf", 
		"LAST");

	web_url("I18N.js_45", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t719.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_45", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t720.inf", 
		"LAST");

	web_url("blank.jsp_19", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t721.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("__package__.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/widget/__package__.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t722.inf", 
		"LAST");

	web_url("ac360base.js_23", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t723.inf", 
		"LAST");

	web_url("Parse.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/xml/Parse.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t724.inf", 
		"LAST");

	web_url("Widget.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/widget/Widget.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t725.inf", 
		"LAST");

	web_url("declare.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/lang/declare.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t726.inf", 
		"LAST");

	web_url("ns.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/ns.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t727.inf", 
		"LAST");

	web_url("Manager.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/widget/Manager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t728.inf", 
		"LAST");

	web_url("a11y.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/a11y.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t729.inf", 
		"LAST");

	web_url("__package__.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/uri/__package__.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t730.inf", 
		"LAST");

	web_url("Parse.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/widget/Parse.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t731.inf", 
		"LAST");

	web_url("DomWidget.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/widget/DomWidget.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t732.inf", 
		"LAST");

	web_url("HtmlWidget.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/widget/HtmlWidget.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t733.inf", 
		"LAST");

	web_url("util.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/html/util.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t734.inf", 
		"LAST");

	web_url("toggle.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/lfx/toggle.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t735.inf", 
		"LAST");

	web_url("jquery-1.11.0.min.js_21", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t736.inf", 
		"LAST");

	web_custom_request("refProfessionalDetail.do_11",
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalDetail.do?mode=viewCondition&module=Building&licSeqNbr=2200860535",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building",
		"Snapshot=t737.inf",
		"Mode=HTTP",
		"Body=TRANSACTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM={CTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM}&value(FirstEntryURL)=%2Fportlets%2Fprofessional%2Fref%2FrefProfessionalList.do%3Fvalue(mode)%3Dsearch%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Fprofessional%2Fref%2FrefProfessionalList.do%3Fmodule%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=submit&modeName=&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=20041&exceptionLogID=&generalCAPSearch=&value(selectedQuickQuery)=&objectName=licenseList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20041&sessionIdFromWindow=OI%2Bx0hdJ0Pv1Z%2BKh5Fl1bVvX&listID=&printType=&checkBoxValue=&disableEduSectionFlag=&isContactValidateBtnFlag=&value(mode)=searchresult&isDynaPaging=true&page-navigator-input-id=1&stateLicense_2200860535=09-ARCH-00007&pageSizeR=10&",
		"LAST");

	web_url("Map.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Map.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t738.inf", 
		"LAST");

	web_url("hashMap.js_23", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t739.inf", 
		"LAST");

	web_submit_data("empty.jsp_9", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t740.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_url("ac360ui.js_20", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t741.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_20", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t742.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_29", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t743.inf", 
		"LAST");

	web_url("session.do_38", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14044", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t744.inf", 
		"LAST");

	lr_end_transaction("TC3_20_Search_LicenseProfessionals_Submit",2);

	lr_think_time(10);

	lr_start_transaction("TC3_24_Click_Contacts");

	web_url("session.do_39", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14044", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t745.inf", 
		"LAST");

	web_url("session.do_40", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t746.inf", 
		"LAST");

	web_url("recentlyViewed.do_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/recentlyViewed.do?mode=getRecentlyViewedItems", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t747.inf", 
		"LAST");

	web_url("session.do_41", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14044", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t748.inf", 
		"LAST");

	lr_think_time(18);

	web_url("session.do_42", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t749.inf", 
		"LAST");

	web_url("session.do_43", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14045", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t750.inf", 
		"LAST");

	web_url("refContact.jsp", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/contact/refContact.jsp?mode=search", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t751.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("blank.jsp_20", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/contact/refContact.jsp?mode=search", 
		"Snapshot=t752.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("blank.jsp_21", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/contact/refContact.jsp?mode=search", 
		"Snapshot=t753.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("blank.jsp_22", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/contact/refContact.jsp?mode=search", 
		"Snapshot=t754.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("refContactList.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/commons/contact/refContact.jsp?mode=search", 
		"Snapshot=t755.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("ac360base.js_24", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t756.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_30", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t757.inf", 
		"LAST");

	web_url("jquery-1.11.0.min.js_22", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t758.inf", 
		"LAST");

	web_url("widget.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/widget/widget.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t759.inf", 
		"LAST");

	web_url("ac360base.js_25", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t760.inf", 
		"LAST");

	web_url("menubar.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/menubar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t761.inf", 
		"LAST");

	web_url("ac360.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t762.inf", 
		"LAST");

	web_url("Link.js", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/widget/Link.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t763.inf", 
		"LAST");

	web_url("ac360InputBoxHotKey.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360InputBoxHotKey.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t764.inf", 
		"LAST");

	web_url("memoryLeakPatch.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/memoryLeakPatch.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t765.inf", 
		"LAST");

	web_url("popup.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/popup/popup.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t766.inf", 
		"LAST");

	web_url("opos.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/opos.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t767.inf", 
		"LAST");

	web_url("masked.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/masked.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t768.inf", 
		"LAST");

	web_url("myTask.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/myTask.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t769.inf", 
		"LAST");

	web_url("dojo.js_8", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/dojo.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t770.inf", 
		"LAST");

	web_url("AAHELP.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/docs/AAHELP.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t771.inf", 
		"LAST");

	web_url("layoutPublic.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/layoutPublic.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t772.inf", 
		"LAST");

	web_url("commonConditionUtil.js_6", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/condition/commonConditionUtil.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t773.inf", 
		"LAST");

	web_url("hashMap.js_24", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t774.inf", 
		"LAST");

	web_url("ac360ui.js_21", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t775.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_21", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t776.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_31", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t777.inf", 
		"LAST");

	web_url("I18N.js_46", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t778.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_46", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t779.inf", 
		"LAST");

	web_url("checkTextAreaLength.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/checkTextAreaLength.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t780.inf", 
		"LAST");

	web_url("I18N.js_47", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t781.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_47", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t782.inf", 
		"LAST");

	web_url("I18N.js_48", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t783.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_48", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t784.inf", 
		"LAST");

	web_url("watermark.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/watermark.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t785.inf", 
		"LAST");

	web_url("I18N.js_49", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t786.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_49", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t787.inf", 
		"LAST");

	web_url("blank.jsp_23", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t788.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("Map.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Map.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t789.inf", 
		"LAST");

	web_url("ac360base.js_26", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t790.inf", 
		"LAST");

	web_submit_data("empty.jsp_10", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t791.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_url("jquery-1.11.0.min.js_23", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t792.inf", 
		"LAST");

	web_url("hashMap.js_25", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t793.inf", 
		"LAST");

	web_url("ac360ui.js_22", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t794.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_22", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t795.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_32", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t796.inf", 
		"LAST");

	lr_end_transaction("TC3_24_Click_Contacts",2);

	lr_think_time(9);

	lr_start_transaction("TC3_25_Click_Search_Contacts_Tab");

	web_url("session.do_44", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14045", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t797.inf", 
		"LAST");

	web_url("refContactList.do_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=FLAGSTAFF", 
		"Snapshot=t798.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("jquery-1.11.0.min.js_24", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t799.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_33", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t800.inf", 
		"LAST");

	web_url("widget.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/widget/widget.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t801.inf", 
		"LAST");

	web_url("ac360base.js_27", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t802.inf", 
		"LAST");

	web_url("memoryLeakPatch.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/memoryLeakPatch.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t803.inf", 
		"LAST");

	web_url("ac360.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t804.inf", 
		"LAST");

	web_url("ac360InputBoxHotKey.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360InputBoxHotKey.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t805.inf", 
		"LAST");

	web_url("popup.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/popup/popup.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t806.inf", 
		"LAST");

	web_url("opos.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/opos.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t807.inf", 
		"LAST");

	web_url("masked.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/masked.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t808.inf", 
		"LAST");

	web_url("menubar.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/menubar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t809.inf", 
		"LAST");

	web_url("myTask.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/myTask.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t810.inf", 
		"LAST");

	web_url("appSpecInfoTableFilter.css_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/appspecinfo/CSS/sky_blue/appSpecInfoTableFilter.css", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t811.inf", 
		"LAST");

	web_url("style.css_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/appspecinfo/CSS/sky_blue/style.css", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t812.inf", 
		"LAST");

	web_url("ext-base.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ext-2.0.2/adapter/ext/ext-base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t813.inf", 
		"LAST");

	web_url("AAHELP.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/docs/AAHELP.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t814.inf", 
		"LAST");

	web_url("validate.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/genericTemplate/js/validate.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t815.inf", 
		"LAST");

	web_url("templateHelper.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/genericTemplate/js/templateHelper.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t816.inf", 
		"LAST");

	web_url("ajaxAnyWhere.js_5", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ajaxAnyWhere.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t817.inf", 
		"LAST");

	web_url("education.js_3", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/education/education.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t818.inf", 
		"LAST");

	web_url("dojo.js_9", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/dojo.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t819.inf", 
		"LAST");

	web_url("table.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/genericTemplate/js/table.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t820.inf", 
		"LAST");

	web_url("spellchecker-caller.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/spellchecker/spellchecker-caller.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t821.inf", 
		"LAST");

	web_url("ext-core.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ext-2.0.2/ext-core.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t822.inf", 
		"LAST");

	web_url("watermark.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/watermark.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t823.inf", 
		"LAST");

	web_url("jquery.watermark.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/genericTemplate/js/jquery.watermark.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t824.inf", 
		"LAST");

	web_url("hashMap.js_26", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t825.inf", 
		"LAST");

	web_url("genericMask.js_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/taglib/genericMask/javascript/genericMask.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t826.inf", 
		"LAST");

	web_url("template.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/genericTemplate/js/template.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t827.inf", 
		"LAST");

	web_url("template_express.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/genericTemplate/js/template_express.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t828.inf", 
		"LAST");

	web_url("form.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/genericTemplate/js/form.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t829.inf", 
		"LAST");

	web_url("Date.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ext-2.0.2/source/util/Date.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t830.inf", 
		"LAST");

	web_url("field.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/genericTemplate/js/field.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t831.inf", 
		"LAST");

	web_url("layoutPublic.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/layoutPublic.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t832.inf", 
		"LAST");

	web_url("formlayout.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/genericTemplate/js/formlayout.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t833.inf", 
		"LAST");

	web_url("ac360ui.js_23", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t834.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_23", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t835.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_34", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t836.inf", 
		"LAST");

	web_url("I18N.js_50", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t837.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_50", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t838.inf", 
		"LAST");

	web_url("checkTextAreaLength.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/checkTextAreaLength.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t839.inf", 
		"LAST");

	web_url("I18N.js_51", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t840.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_51", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t841.inf", 
		"LAST");

	web_url("I18N.js_52", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t842.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_52", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t843.inf", 
		"LAST");

	web_url("I18N.js_53", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t844.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_53", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t845.inf", 
		"LAST");

	web_url("I18N.js_54", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t846.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_54", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t847.inf", 
		"LAST");

	web_url("blank.jsp_24", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t848.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("I18N.js_55", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t849.inf", 
		"LAST");

	web_url("ac360base.js_28", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t850.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_55", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t851.inf", 
		"LAST");

	web_url("jquery-1.11.0.min.js_25", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t852.inf", 
		"LAST");

	web_url("hashMap.js_27", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t853.inf", 
		"LAST");

	web_url("ac360ui.js_24", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t854.inf", 
		"LAST");

	web_url("I18N.js_56", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t855.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_24", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t856.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_56", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t857.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_35", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t858.inf", 
		"LAST");

	web_url("I18N.js_57", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t859.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_57", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t860.inf", 
		"LAST");

	web_url("I18N.js_58", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t861.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_58", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t862.inf", 
		"LAST");

	web_submit_data("ajax.do_2", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t863.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_url("Map.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Map.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t864.inf", 
		"LAST");

	web_submit_data("empty.jsp_11", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t865.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_url("base64.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/base64.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t866.inf", 
		"LAST");

	web_submit_data("regionalSyncMask.do_19", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t867.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_20", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t868.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_21", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&getMsg=Y", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t869.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_22", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t870.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_23", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t871.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_24", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t872.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_25", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t873.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_26", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t874.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_27", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t875.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_28", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t876.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_29", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t877.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_30", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t878.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_31", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t879.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_32", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t880.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_33", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t881.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_34", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t882.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_35", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t883.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_45", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14045", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t884.inf", 
		"LAST");

	web_url("session.do_46", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14045", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t885.inf", 
		"LAST");

	lr_end_transaction("TC3_25_Click_Search_Contacts_Tab",2);

	lr_think_time(13);

	lr_start_transaction("TC3_25_Search_Contacts_Submit");

	web_url("session.do_47", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14045", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t886.inf", 
		"LAST");

	lr_think_time(4);

	web_url("session.do_48", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14045", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t887.inf", 
		"LAST");

	web_submit_data("refContactList.do_3", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t888.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=TRANSACTION_TOKEN_KEY_FOR_REFCONTACTLISTACTIONFORM", "Value=fbc56331b55c7cc559f8c1c445c5b1e9", "ENDITEM", 
		"Name=value(FirstEntryURL)", "Value=/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", "ENDITEM", 
		"Name=value(CurrentEntryURL)", "Value=/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", "ENDITEM", 
		"Name=portlet_language", "Value=en_US", "ENDITEM", 
		"Name=refresh_target", "Value=", "ENDITEM", 
		"Name=refresh_url", "Value=", "ENDITEM", 
		"Name=buttonName", "Value=", "ENDITEM", 
		"Name=modeName", "Value=search", "ENDITEM", 
		"Name=module", "Value=Building", "ENDITEM", 
		"Name=accelasubmitbuttonname", "Value=submit", "ENDITEM", 
		"Name=itemName", "Value=", "ENDITEM", 
		"Name=CurrentViewID", "Value=38", "ENDITEM", 
		"Name=exceptionLogID", "Value=", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=value(portlet_soundex)", "Value=off", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=38", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=OI+x0hdJ0Pv1Z+Kh5Fl1bVvX", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=value(mode)", "Value=search", "ENDITEM", 
		"Name=value(capcontactid)", "Value=", "ENDITEM", 
		"Name=value(sync)", "Value=", "ENDITEM", 
		"Name=value(isDisableRefContact)", "Value=", "ENDITEM", 
		"Name=value(lookup)", "Value=false", "ENDITEM", 
		"Name=value(type)", "Value=", "ENDITEM", 
		"Name=value(actType)", "Value=", "ENDITEM", 
		"Name=value(fromDaily)", "Value=", "ENDITEM", 
		"Name=value(scheduleNbr)", "Value=", "ENDITEM", 
		"Name=value(locationNbr)", "Value=", "ENDITEM", 
		"Name=value(refExamNbr)", "Value=", "ENDITEM", 
		"Name=value(providerNbr)", "Value=", "ENDITEM", 
		"Name=value(from)", "Value=", "ENDITEM", 
		"Name=value(unDoAssign)", "Value=", "ENDITEM", 
		"Name=value(providerEventBuilder)", "Value=", "ENDITEM", 
		"Name=value(usedQueryInfo)", "Value=Y", "ENDITEM", 
		"Name=value(lastName)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(phone1CountryCode)", "Value=", "ENDITEM", 
		"Name=value(phone1_disp)", "Value=", "ENDITEM", 
		"Name=value(phone1)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(addressLine1)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(title)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(firstName)", "Value=Mary", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(phone2CountryCode)", "Value=", "ENDITEM", 
		"Name=value(phone2_disp)", "Value=", "ENDITEM", 
		"Name=value(phone2)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(addressLine2)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(middleName)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(faxCountryCode)", "Value=", "ENDITEM", 
		"Name=value(fax_disp)", "Value=", "ENDITEM", 
		"Name=value(fax)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(addressLine3)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactType)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(email)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(city)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(businessName)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactSeqNumber)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(fullName)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(relation)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(state)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(zip_disp)", "Value=", "ENDITEM", 
		"Name=value(zip)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(countryCode)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(auditStatus)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(preferredChannel)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(salutation)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(gender)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(postOfficeBox)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=date(birthDate)", "Value=", "ENDITEM", 
		"Name=date(endBirthDate)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(phone3CountryCode)", "Value=", "ENDITEM", 
		"Name=value(phone3_disp)", "Value=", "ENDITEM", 
		"Name=value(phone3)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(socialSecurityNumber)", "Value=", "ENDITEM", 
		"Name=value(maskformat_socialSecurityNumber)", "Value=AAA-AA-AAAA", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(fein)", "Value=", "ENDITEM", 
		"Name=value(maskformat_fein)", "Value=####-##-####", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(tradeName)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(namesuffix)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(activityModel*activityName)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(activityModel*activityType)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(activityModel*activityDescription)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(activityModel*activityAttributeLabel)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(activityModel*activityAttributeValue)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(businessName2)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(birthCity)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(birthState)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(birthRegion)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(race)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=date(deceasedDate)", "Value=", "ENDITEM", 
		"Name=date(endDeceasedDate)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(passportNumber)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(driverLicenseNbr)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(driverLicenseState)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(stateIDNbr)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressPK*addressID)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*addressType)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*recipient)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*fullAddress)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*addressLine1)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*addressLine2)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*addressLine3)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*houseNumberStart)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*houseNumberEnd)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*streetDirection)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*streetPrefix)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*streetName)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*streetSuffix)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*unitType)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*unitStart)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*unitEnd)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*streetSuffixDirection)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*countryCode)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*city)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*state)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*zip_disp)", "Value=", "ENDITEM", 
		"Name=value(contactAddressModel*zip)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*phoneCountryCode)", "Value=", "ENDITEM", 
		"Name=value(contactAddressModel*phone_disp)", "Value=", "ENDITEM", 
		"Name=value(contactAddressModel*phone)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*faxCountryCode)", "Value=", "ENDITEM", 
		"Name=value(contactAddressModel*fax_disp)", "Value=", "ENDITEM", 
		"Name=value(contactAddressModel*fax)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(auditModel*auditStatus)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*levelPrefix)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*levelNumberStart)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*levelNumberEnd)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*houseNumberAlphaStart)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*houseNumberAlphaEnd)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactAddressModel*validateFlag)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(templateGroup)", "Value=G3CONTACT", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(genericTemplateAttribute*fieldName)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(genericTemplateAttribute*defaultValue)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(genericTemplateTableValue*fieldName)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(genericTemplateTableValue*defaultValue)", "Value=", "ENDITEM", 
		"Name=valuetextarea286", "Value=null", "ENDITEM", 
		"Name=sourcetextarea286", "Value=", "ENDITEM", 
		"Name=layouttextarea286", "Value=", "ENDITEM", 
		"Name=uiuid", "Value=286", "ENDITEM", 
		"Name=_viewstate_", "Value={\"empty\":false,\"fields\":{\"value(fein)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"FEIN\"},\"value(socialSecurityNumber)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"SSN\"}}}", "ENDITEM", 
		"LAST");

	web_url("Ac360ToolManager.js_36", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t889.inf", 
		"LAST");

	web_url("jquery-1.11.0.min.js_26", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t890.inf", 
		"LAST");

	web_url("ac360base.js_29", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t891.inf", 
		"LAST");

	web_url("widget.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/widget/widget.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t892.inf", 
		"LAST");

	web_url("ac360.js_13", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t893.inf", 
		"LAST");

	web_url("memoryLeakPatch.js_13", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/memoryLeakPatch.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t894.inf", 
		"LAST");

	web_url("ac360InputBoxHotKey.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360InputBoxHotKey.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t895.inf", 
		"LAST");

	web_url("popup.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/popup/popup.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t896.inf", 
		"LAST");

	web_url("AAHELP.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/docs/AAHELP.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t897.inf", 
		"LAST");

	web_url("opos.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/opos.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t898.inf", 
		"LAST");

	web_url("masked.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/masked.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t899.inf", 
		"LAST");

	web_url("myTask.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/myTask.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t900.inf", 
		"LAST");

	web_url("menubar.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/menubar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t901.inf", 
		"LAST");

	web_url("dojo.js_10", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/dojo.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t902.inf", 
		"LAST");

	web_url("layoutPublic.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/layoutPublic.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t903.inf", 
		"LAST");

	web_url("Link.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/widget/Link.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t904.inf", 
		"LAST");

	web_url("commonConditionUtil.js_7", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/commons/condition/commonConditionUtil.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t905.inf", 
		"LAST");

	web_url("hashMap.js_28", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t906.inf", 
		"LAST");

	web_url("watermark.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/watermark.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t907.inf", 
		"LAST");

	web_url("ac360ui.js_25", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t908.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_25", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t909.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_37", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t910.inf", 
		"LAST");

	web_url("I18N.js_59", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t911.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_59", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t912.inf", 
		"LAST");

	web_url("checkTextAreaLength.js_13", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/checkTextAreaLength.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t913.inf", 
		"LAST");

	web_url("I18N.js_60", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t914.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_60", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t915.inf", 
		"LAST");

	web_url("I18N.js_61", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t916.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_61", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t917.inf", 
		"LAST");

	web_url("I18N.js_62", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t918.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_62", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t919.inf", 
		"LAST");

	web_url("blank.jsp_25", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t920.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("Map.js_12", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Map.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t921.inf", 
		"LAST");

	web_url("ac360base.js_30", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t922.inf", 
		"LAST");

	web_submit_data("empty.jsp_12", 
		"Action=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t923.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_url("jquery-1.11.0.min.js_27", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t924.inf", 
		"LAST");

	web_url("hashMap.js_29", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t925.inf", 
		"LAST");

	web_url("ac360ui.js_26", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t926.inf", 
		"LAST");

	web_url("ac360ScrollBar.js_26", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t927.inf", 
		"LAST");

	web_url("Ac360ToolManager.js_38", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/error/blank.jsp", 
		"Snapshot=t928.inf", 
		"LAST");

	web_url("session.do_49", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14045", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t929.inf", 
		"LAST");

	lr_end_transaction("TC3_25_Search_Contacts_Submit",2);

	lr_think_time(17);

	lr_start_transaction("SignOut");

	web_url("session.do_50", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.14045", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t930.inf", 
		"LAST");

	web_url("refresh-hover.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/spa/images/reskin/refresh-hover.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t931.inf", 
		"LAST");

	web_url("signoff.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/signoff.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/portlets/spa/dashboard.do", 
		"Snapshot=t932.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("signout.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/security/signout.do", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/signoff.do", 
		"Snapshot=t933.inf", 
		"LAST");

	web_submit_data("portal", 
		"Action=https://aa-pt6245.dev.accela.com:5443/jetspeed/portal?action=JClearCookie", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/signoff.do", 
		"Snapshot=t934.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"LAST");

	web_url("logoutAction.do", 
		"URL=https://aa-pt6245.dev.accela.com:5443/ssoAdapter/logoutAction.do?servProvCode=FLAGSTAFF&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/signoff.do", 
		"Snapshot=t935.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_think_time(4);

	web_url("hostSignon.do_4", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?signOff=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/ssoAdapter/logoutAction.do?servProvCode=FLAGSTAFF&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"Snapshot=t936.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("spacer.gif_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/images/spacer.gif", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?signOff=true", 
		"Snapshot=t937.inf", 
		"LAST");

	web_url("host-signon.css_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/css/host-signon.css", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?signOff=true", 
		"Snapshot=t938.inf", 
		"LAST");

	web_url("ac360.js_14", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/ac360.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?signOff=true", 
		"Snapshot=t939.inf", 
		"LAST");

	web_url("memoryLeakPatch.js_14", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/memoryLeakPatch.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?signOff=true", 
		"Snapshot=t940.inf", 
		"LAST");

	web_url("I18N.js_63", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?signOff=true", 
		"Snapshot=t941.inf", 
		"LAST");

	web_url("jsMessageResoruce.js_63", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?signOff=true", 
		"Snapshot=t942.inf", 
		"LAST");

	web_url("checkTextAreaLength.js_14", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/checkTextAreaLength.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?signOff=true", 
		"Snapshot=t943.inf", 
		"LAST");

	web_url("Util.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/widget/Util.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?signOff=true", 
		"Snapshot=t944.inf", 
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
		"Snapshot=t945.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("login.css_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/includes/login.css", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t946.inf", 
		"LAST");

	web_url("dojo.js_11", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/dojo.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t947.inf", 
		"LAST");

	web_url("hook.png", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/images/hook.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t948.inf", 
		"LAST");

	web_url("sso.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/javascript/sso.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t949.inf", 
		"LAST");

	web_url("accela_logo_v2.jpg_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/images/accela_logo_v2.jpg", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t950.inf", 
		"LAST");

	web_url("login-bar.gif_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/security/images/login-bar.gif", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t951.inf", 
		"LAST");

	web_url("json.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/json.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t952.inf", 
		"LAST");

	web_url("AdapterRegistry.js_2", 
		"URL=https://aa-pt6245.dev.accela.com:5443/portlets/framework/includes/javascript/dojo/src/AdapterRegistry.js", 
		"Resource=1", 
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t953.inf", 
		"LAST");

	web_submit_data("getconfigs.do_2",
		"Action=https://aa-pt6245.dev.accela.com:5443/security/getconfigs.do",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://aa-pt6245.dev.accela.com:5443/security/hostSignon.do?hostSignOn=true&signOff=true",
		"Snapshot=t954.inf",
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
# 5 "c:\\users\\hboyina\\desktop\\desktop_08102017_created\\912_pt_08102017\\scripts\\new folde\\08162017\\912_devint_tc3\\\\combined_912_DevInt_TC3.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\users\\hboyina\\desktop\\desktop_08102017_created\\912_pt_08102017\\scripts\\new folde\\08162017\\912_devint_tc3\\\\combined_912_DevInt_TC3.c" 2

