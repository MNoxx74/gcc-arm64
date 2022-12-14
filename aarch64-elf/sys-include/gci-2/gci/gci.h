/* gci.h generated by valac 0.55.91, the Vala compiler, do not modify */

#ifndef __GCI_GCI_H__
#define __GCI_GCI_H__

#include <glib-object.h>
#include <gtk/gtk.h>
#include <glib.h>

G_BEGIN_DECLS

#if !defined(VALA_EXTERN)
#if defined(_MSC_VER)
#define VALA_EXTERN __declspec(dllexport) extern
#elif __GNUC__ >= 4
#define VALA_EXTERN __attribute__((visibility("default"))) extern
#else
#define VALA_EXTERN extern
#endif
#endif

#define GCI_TYPE_ENTRY_CONTROLLER (gci_entry_controller_get_type ())
#define GCI_ENTRY_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GCI_TYPE_ENTRY_CONTROLLER, GCiEntryController))
#define GCI_ENTRY_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GCI_TYPE_ENTRY_CONTROLLER, GCiEntryControllerClass))
#define GCI_IS_ENTRY_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GCI_TYPE_ENTRY_CONTROLLER))
#define GCI_IS_ENTRY_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GCI_TYPE_ENTRY_CONTROLLER))
#define GCI_ENTRY_CONTROLLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GCI_TYPE_ENTRY_CONTROLLER, GCiEntryControllerClass))

typedef struct _GCiEntryController GCiEntryController;
typedef struct _GCiEntryControllerClass GCiEntryControllerClass;
typedef struct _GCiEntryControllerPrivate GCiEntryControllerPrivate;

struct _GCiEntryController {
	GObject parent_instance;
	GCiEntryControllerPrivate * priv;
};

struct _GCiEntryControllerClass {
	GObjectClass parent_class;
};

VALA_EXTERN GType gci_entry_controller_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GCiEntryController, g_object_unref)
VALA_EXTERN GCiEntryController* gci_entry_controller_new_for_entry (GtkEntry* entry);
VALA_EXTERN GCiEntryController* gci_entry_controller_construct_for_entry (GType object_type,
                                                              GtkEntry* entry);
VALA_EXTERN GCiEntryController* gci_entry_controller_new (void);
VALA_EXTERN GCiEntryController* gci_entry_controller_construct (GType object_type);
VALA_EXTERN GtkEntry* gci_entry_controller_get_entry (GCiEntryController* self);
VALA_EXTERN void gci_entry_controller_set_entry (GCiEntryController* self,
                                     GtkEntry* value);

G_END_DECLS

#endif
