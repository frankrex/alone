#ifndef SENDMAIL_H_INCLUDED
#define SENDMAIL_H_INCLUDED



#endif // SENDMAIL_H_INCLUDED
struct sMailInfo   //邮件信息
{
   char* m_pcUserName; //用户登陆邮箱名称
   char* m_pcUserPassWord; //用户登陆邮箱的密码
   char* m_pcSenderName; //用户发送时显示的名称
   char* m_pcSender; //发送者的邮箱地址
   char* m_pcReceiver; //接受者的邮箱地址
   char* m_pcTitle; //邮箱标题
   char* m_pcBody; //邮件文本正文
   char* m_pcIPaddr; //服务器的IP
   char* m_pcIPName; //服务器的名称
   sMailInfo(){memset(this,0,sizeof(sMailInfo));}
};
class SendMail
{
   public:
   SendMail(void);
   ~SendMail(void);
   public:
   boolSendMail(sMailInfo &smailInfo); //发送邮件，需要在发送的时候初始化
};
