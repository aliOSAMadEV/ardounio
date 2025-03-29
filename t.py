import telebot
import pyfirmata2
import time
port = "COM4"
board = pyfirmata2. Arduino (port)
ledPin = board.get_pin("d:13:o")



TOKEN = '7579396282:AAGPs1G7I65A0wyJ07EU0MoLVnMeDZQUx4U'


bot = telebot.TeleBot(TOKEN)


audio_file_name = 'ElevenLabs_2025-03-21T13_43_14_Bill_pre_s50_sb75_se0_b_m2.mp3'

@bot.message_handler(commands=['dohk'])
def send_audio(message):

    with open(audio_file_name, 'rb') as audio_file:
        bot.send_audio(message.chat.id, audio_file)
        ledPin.write(1)
        time.sleep(1000)
       
@bot.message_handler(commands=['off'])
def send_audio(message):
    ledPin.write(0)
    bot.send_message(message.chat.id, "off")    
 


bot.polling()