<template>
  <div class="full-height"></div>
</template>
<script>
  export default {
    props: ['code', 'options'],
    mounted () {
      this.$nextTick(() => {
        const CodeMirror = window.CodeMirror
        var myCodeMirror = CodeMirror(this.$el, {
          value: this.code.trim(),
          readOnly: true,
          lineNumbers: true,
          matchBrackets: true,
          mode: "text/x-c++src"
        })
      })
    }
  }
</script>