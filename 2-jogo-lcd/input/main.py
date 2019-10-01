import os, pyxhook

# TODO: saida serial p/o arduino


# Função que será chamada quando uma tecla for pressionada
def OnKeyPress(event):
    print("Key: {}".format(event.Key))

# Conectar o hook
hook = pyxhook.HookManager()
hook.KeyDown = OnKeyPress
hook.HookKeyboard()

# Iniciar o hook num try catch except
try:
    hook.start()
except KeyboardInterrupt:
    pass
